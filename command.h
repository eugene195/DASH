#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <vector>

using namespace std;

class Command
{
public:
    Command(string raw) : rawInput(raw) {}

private:
    string executable;
    string rawInput;
    vector<string> options;

};

#endif // COMMAND_H
