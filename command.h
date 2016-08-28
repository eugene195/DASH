#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <vector>
#include <builtins/abstractbuiltin.h>

using namespace std;

class Command
{
public:

    Command(const string _executable, const vector<string>& _options,
            const AbstractBuiltin* _builtin = nullptr) :
        executable(_executable),
        options(_options),
        builtin(_builtin) {}

    const string& getExecutable() const;

    const vector<string>& getOptions() const;

    const AbstractBuiltin* getBuiltin() const;

private:
    const string executable;
    const vector<string> options;
    const AbstractBuiltin* builtin;
};

#endif // COMMAND_H
