#include "command.h"

const vector<string> &Command::getTokens() const
{
    return tokens;
}

void Command::addTokens(const vector<string> &value)
{
    tokens.insert(tokens.end(), value.begin(), value.end());
}

const vector<pair<string, string> > &Command::getExecutables() const
{
    return executables;
}

void Command::addExecutable(string _executable, string path)
{
    /**
     * FIXME
     * Does std::pair have constructors?
    */
    pair<string, string> executable;
    executable.first = _executable;
    executable.second = path;
    executables.push_back(executable);
}

void Command::addOptionsToExecutable(const string executableName, const vector<string> &options)
{
    commandOptions[executableName] = options;
}

vector<string> Command::getOptionsForExecutable(const string executableName) const
{
    return commandOptions.at(executableName);
}

string Command::getRawInput() const
{
    return rawInput;
}
