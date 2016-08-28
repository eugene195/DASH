#include "command.h"

string Command::getExecutable() const
{
    return executable;
}

vector<string> Command::getOptions() const
{
    return options;
}
