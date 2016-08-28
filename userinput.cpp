#include "userinput.h"

const vector<string> &UserInput::getTokens() const
{
    return tokens;
}

void UserInput::addTokens(const vector<string> &value)
{
    tokens.insert(tokens.end(), value.begin(), value.end());
}

void UserInput::appendCommand(const Command &command)
{
    commands.push_back(command);
}

string UserInput::getRawInput() const
{
    return rawInput;
}

vector<Command> UserInput::getCommands() const
{
    return commands;
}
