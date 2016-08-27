#ifndef TOKENIZESTEP_H
#define TOKENIZESTEP_H

#include "abstractprocessingstep.h"

class TokenizeStep : public AbstractProcessingStep
{
public:
    Command processCommand (Command &command);
    ~TokenizeStep();

private:
    vector<string> split(const string &input, char delim = ' ');
};

#endif // TOKENIZESTEP_H
