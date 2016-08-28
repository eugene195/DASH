#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <vector>

using namespace std;

class Command
{
public:
    Command(const string _executable, const vector<string>& _options) :
        executable(_executable),
        options(_options) {}

    string getExecutable() const;

    vector<string> getOptions() const;

private:
    const string executable;
    const vector<string> options;
};

#endif // COMMAND_H
