#ifndef CHANGEDIRECTORY_H
#define CHANGEDIRECTORY_H

#include "abstractbuiltin.h"

class ChangeDirectory : public AbstractBuiltin
{
public:
    void execute(const vector<string> &options) const;
};

#endif // CHANGEDIRECTORY_H
