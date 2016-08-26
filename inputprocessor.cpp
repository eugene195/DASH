#include "inputprocessor.h"
#include "command.h"

void InputProcessor::process(string rawCommand)
{
    Command command = rawCommand;
    for (AbstractProcessingStep *step : steps) {
        command = step->processCommand(command);
    }
}

InputProcessor::InputProcessor()
{
    AbstractProcessingStep *tokenize = new TokenizeStep;
    this->steps.push_back(tokenize);
}

