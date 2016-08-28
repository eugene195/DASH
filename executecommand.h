#ifndef EXECUTECOMMAND_H
#define EXECUTECOMMAND_H

#include "abstractprocessingstep.h"

class ExecuteCommand : public AbstractProcessingStep
{
public:
    UserInput processCommand (UserInput &input);

private:
    void runExecution(vector<char*> argv);
    void runBuiltin(const Command& command);
    vector<char *> prepareCommandForExecution(string command, const vector<string>& options);
};

#endif // EXECUTECOMMAND_H
