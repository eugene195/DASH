#include "tokenizestep.h"
#include <sstream>

UserInput TokenizeStep::processCommand(UserInput &command)
{
    command.addTokens(split(command.getRawInput()));
    return command;
}

vector<string> TokenizeStep::split(const string &input, char delim)
{
    vector<string> elems;
    stringstream inputStream(input);
    string item;

    while (getline(inputStream, item, delim))
        elems.push_back(item);

    return elems;
}

TokenizeStep::~TokenizeStep() {}

