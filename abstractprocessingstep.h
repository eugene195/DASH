#ifndef PROCESSINGSTEP_H
#define PROCESSINGSTEP_H

#include "userinput.h"

class AbstractProcessingStep
{
public:
    virtual UserInput processCommand (UserInput &command) = 0;
    virtual ~AbstractProcessingStep() {}
};

#endif // PROCESSINGSTEP_H
