#include <iostream>
#include <string>
#include "inputprocessor.h"
#include "easylogging++.h"

using namespace std;

INITIALIZE_EASYLOGGINGPP

int main()
{
    cout << "Hello World!" << endl;

    InputProcessor processor;
    string rawCommand;

    while (1) {
        getline(cin, rawCommand);
        cout << rawCommand << endl;
        processor.process(rawCommand);
    }
    return 0;
}

