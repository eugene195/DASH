#ifndef PRINTWORKINGDIRECTORY_H
#define PRINTWORKINGDIRECTORY_H

#include "abstractbuiltin.h"

class PrintWorkingDirectory : public AbstractBuiltin
{
public:
    void execute(const vector<string> &options) const;
};

#endif // PRINTWORKINGDIRECTORY_H
