#include "executecommand.h"
#include <unistd.h>
#include "easylogging++.h"
#include <sys/wait.h>

Command ExecuteCommand::processCommand(Command &command)
{
    string commandName = command.getExecutables().at(0).first;
    auto options = command.getOptionsForExecutable(commandName);
    LOG(INFO) << "Command: " + commandName << endl;
    runExecution();
    return command;
}

void ExecuteCommand::runExecution()
{
    pid_t pid = fork();

    if (pid == 0) {
        LOG(INFO) << "--child process--";

        /**
         * FIXME How do I pass parameters?
         * */

        execl("/bin/ls", "/bin/ls", "-r", "-t", "-l", (char *) 0);
    } else if (pid > 0) {
        int status;
        do {
            status = wait(&status);
            if(status == -1 && errno != ECHILD) {
                perror("Error during wait()");
                abort();
            }
            LOG(INFO) << "--waiting--";
        } while (status > 0);
    } else
        LOG(INFO) << "--Fork failed--";
    LOG(INFO) << endl << "--end of execution--" << endl;
}
