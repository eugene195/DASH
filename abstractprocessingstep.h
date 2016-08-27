#ifndef PROCESSINGSTEP_H
#define PROCESSINGSTEP_H

#include "command.h"

class AbstractProcessingStep
{
public:
    virtual Command processCommand (Command &command) = 0;
    virtual ~AbstractProcessingStep() {}
};

#endif // PROCESSINGSTEP_H
