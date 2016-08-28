#include "inputprocessor.h"
#include "userinput.h"
#include "steps/mapexecutabletooptions.h"
#include "steps/executecommand.h"
#include <algorithm>

void InputProcessor::process(string& rawCommand)
{
    rawCommand = squashSpaces(trim(rawCommand));
    if (!rawCommand.empty()) {
        UserInput command = rawCommand;
        for (AbstractProcessingStep *step : steps) {
            command = step->processCommand(command);
        }
    }
}

InputProcessor::InputProcessor()
{
    this->steps = {
        new TokenizeStep,
        new MapExecutableToOptions,
        new ExecuteCommand
    };
}

InputProcessor::~InputProcessor()
{
    for (auto* step : steps) {
        delete step;
    }
}

string &InputProcessor::trimRight(string &s, const string &delimiters)
{
    return s.erase(s.find_last_not_of(delimiters) + 1);
}

string &InputProcessor::trimLeft(string &s, const string &delimiters)
{
    return s.erase(0, s.find_first_not_of(delimiters));
}

string &InputProcessor::trim(string &s, const string &delimiters)
{
    return trimLeft(trimRight(s, delimiters), delimiters);
}

string& InputProcessor::squashSpaces(string &s)
{
    s.erase(unique(s.begin(), s.end(),
                   [](char a, char b) { return isspace(a) && isspace(b); }),
            s.end());
    return s;
}

