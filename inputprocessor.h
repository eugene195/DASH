#ifndef INPUTPROCESSOR_H
#define INPUTPROCESSOR_H

#include <string>
#include <vector>

#include "abstractprocessingstep.h"
#include "tokenizestep.h"

using namespace std;

class InputProcessor
{
public:
    void process (string rawCommand);
    InputProcessor();

private:
    vector<AbstractProcessingStep *> steps;
};

#endif // INPUTPROCESSOR_H
