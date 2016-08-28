#include "executecommand.h"
#include <unistd.h>
#include "easylogging++.h"
#include <sys/wait.h>

Command ExecuteCommand::processCommand(Command &command)
{
    runExecution(prepareCommandForExecution(
                     command.getExecutables().at(0).first,
                     command.getOptionsForExecutable(commandName)
                     ));
    return command;
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

    LOG(INFO) << endl << "--end of execution--" << endl;
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
