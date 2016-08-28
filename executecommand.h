#ifndef EXECUTECOMMAND_H
#define EXECUTECOMMAND_H

#include "abstractprocessingstep.h"

class ExecuteCommand : public AbstractProcessingStep
{
public:
    Command processCommand (Command &command);

private:
    void runExecution(vector<char*> argv);
    vector<char *> prepareCommandForExecution(string command, const vector<string>& options);
};

#endif // EXECUTECOMMAND_H
