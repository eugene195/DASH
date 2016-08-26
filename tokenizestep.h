#ifndef TOKENIZESTEP_H
#define TOKENIZESTEP_H

#include "abstractprocessingstep.h"

class TokenizeStep : public AbstractProcessingStep
{
public:
    Command processCommand (Command &command);
    ~TokenizeStep();
};

#endif // TOKENIZESTEP_H
