#ifndef INPUTPROCESSOR_H
#define INPUTPROCESSOR_H

#include <string>
#include <vector>

#include "abstractprocessingstep.h"
#include "steps/tokenizestep.h"

using namespace std;

class InputProcessor
{
public:
    void process (string &rawCommand);
    InputProcessor();
    ~InputProcessor();

private:
    vector<AbstractProcessingStep *> steps;
    string& trimRight(string& s, const string& delimiters = " \f\n\r\t\v");
    string& trimLeft(string& s, const string& delimiters = " \f\n\r\t\v");
    string& trim(string& s, const string& delimiters = " \f\n\r\t\v");
    string &squashSpaces(string& s);
};

#endif // INPUTPROCESSOR_H
