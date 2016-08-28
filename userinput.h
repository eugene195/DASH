#ifndef USERINPUT_H
#define USERINPUT_H

#include <string>
#include <vector>
#include <list>
#include <map>
#include "command.h"


using namespace std;

class UserInput
{
public:
    UserInput(string raw) : rawInput(raw) {}

    const vector<string> &getTokens() const;
    void addTokens(const vector<string> &value);

    void appendCommand(const Command& command);
    string getRawInput() const;

    vector<Command> getCommands() const;

private:
    string rawInput;
    vector <string> tokens;
    vector <Command> commands;
};

#endif // USERINPUT_H
