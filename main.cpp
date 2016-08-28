#include <iostream>
#include <string>
#include "inputprocessor.h"
#include "easylogging++.h"

using namespace std;

INITIALIZE_EASYLOGGINGPP

int main()
{
    InputProcessor processor;
    string rawCommand;

    while (1) {
        cout << endl << "$ ";
        getline(cin, rawCommand);
        processor.process(rawCommand);
    }
    return 0;
}

