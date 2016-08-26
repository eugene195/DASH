#ifndef PROCESSINGSTEP_H
#define PROCESSINGSTEP_H

#include "command.h"

class AbstractProcessingStep
{
public:
    virtual Command processCommand (Command &command) = 0;
};

#endif // PROCESSINGSTEP_H
