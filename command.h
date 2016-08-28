#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <vector>
#include <list>
#include <map>


using namespace std;

class Command
{
public:
    Command(string raw) : rawInput(raw) {}

    const vector<string> &getTokens() const;
    void addTokens(const vector<string> &value);

    const vector<pair<string, string> > &getExecutables() const;
    void addExecutable(string _executable, string path = "");

    void addOptionsToExecutable (const string executableName, const vector<string>& options);
    vector<string> getOptionsForExecutable (const string executableName) const;

    string getRawInput() const;

private:
    string rawInput;

    vector <string> tokens;
    map <string, vector<string> > commandOptions;
    vector < pair<string, string> > executables;
    // MAP options;
};

#endif // COMMAND_H
