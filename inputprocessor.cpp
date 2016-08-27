#include "inputprocessor.h"
#include "command.h"
#include "mapexecutabletooptions.h"
#include "executecommand.h"
#include "findcommandexecutable.h"

void InputProcessor::process(string rawCommand)
{
    Command command = rawCommand;
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
    AbstractProcessingStep *findExecutables = new FindCommandExecutable;
    AbstractProcessingStep *mapToOptions = new MapExecutableToOptions;
    AbstractProcessingStep *executeCommand = new ExecuteCommand;
    this->steps.push_back(tokenize);
    this->steps.push_back(findExecutables);
    this->steps.push_back(mapToOptions);
    this->steps.push_back(executeCommand);
}

InputProcessor::~InputProcessor()
{
    for (auto* step : steps) {
        delete step;
    }
}

