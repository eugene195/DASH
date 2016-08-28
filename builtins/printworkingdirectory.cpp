#include "printworkingdirectory.h"
#include <unistd.h>
#include <limits.h>
#include <iostream>

using namespace std;

void PrintWorkingDirectory::execute(const vector<string> &options) const
{
    char buffer[PATH_MAX];
    char *path = getcwd(buffer, PATH_MAX);
    if (!path) {
        /**
         * FIXME
         * Handle error no
         */
    } else {
        cout << path << endl;
    }
}
