#include "executecommand.h"
#include <unistd.h>
#include "easylogging++.h"
#include <sys/wait.h>

UserInput ExecuteCommand::processCommand(UserInput &input)
{
    for (auto command : input.getCommands())
    {
        if (command.getBuiltin()) {
            runBuiltin(command);
        } else {
            runExecution(
                        prepareCommandForExecution(
                            command.getExecutable(),
                            command.getOptions()));
        }
    }
    return input;
}

void ExecuteCommand::runExecution(vector<char*> argv)
{
    pid_t pid = fork();

    if (pid == 0) {
        execvp(argv[0], &argv[0]);
    } else if (pid > 0) {
        int status;
        do {
            status = wait(&status);
            if(status == -1 && errno != ECHILD) {
                perror("Error during wait()");
                abort();
            }
        } while (status > 0);
    } else {
        LOG(INFO) << "--Fork failed--";
    }
}

void ExecuteCommand::runBuiltin(const Command &command) {
    command.getBuiltin()->execute(command.getOptions());
}

vector<char*> ExecuteCommand::prepareCommandForExecution(
        string command, const vector<string> &options) {
    vector<char*> ctokens;
    ctokens.push_back(const_cast<char*>(command.c_str()));
    for(auto option: options)
        ctokens.push_back(const_cast<char*>(option.c_str()));
    ctokens.push_back(static_cast<char*>(NULL));
    return ctokens;
}
