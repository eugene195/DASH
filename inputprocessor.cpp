#include "inputprocessor.h"
#include "userinput.h"
#include "mapexecutabletooptions.h"
#include "executecommand.h"

void InputProcessor::process(string rawCommand)
{
    UserInput command = rawCommand;
    for (AbstractProcessingStep *step : steps) {
        command = step->processCommand(command);
    }
}

InputProcessor::InputProcessor()
{
/**
 * FIXME
*/
    AbstractProcessingStep *tokenize = new TokenizeStep;
    AbstractProcessingStep *mapToOptions = new MapExecutableToOptions;
    AbstractProcessingStep *executeCommand = new ExecuteCommand;
    this->steps.push_back(tokenize);
    this->steps.push_back(mapToOptions);
    this->steps.push_back(executeCommand);
}

InputProcessor::~InputProcessor()
{
    for (auto* step : steps) {
        delete step;
    }
}

