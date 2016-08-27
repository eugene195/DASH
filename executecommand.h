#ifndef EXECUTECOMMAND_H
#define EXECUTECOMMAND_H

#include "abstractprocessingstep.h"

class ExecuteCommand : public AbstractProcessingStep
{
public:
    Command processCommand (Command &command);

private:
    void runExecution();
};

#endif // EXECUTECOMMAND_H
