#include "exit.h"
#include <stdlib.h>

void Exit::execute(const vector<string> &options) const
{
    exit(0);
}
