#include "command.h"

const string& Command::getExecutable() const
{
    return executable;
}

const vector<string>& Command::getOptions() const
{
    return options;
}

const AbstractBuiltin* Command::getBuiltin() const
{
    return builtin;
}
