#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    string rawCommand;
    while (1) {
        getline(cin, rawCommand);
        cout << rawCommand << endl;
    }
    return 0;
}

