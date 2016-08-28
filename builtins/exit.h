#ifndef EXIT_H
#define EXIT_H

#include "abstractbuiltin.h"

class Exit : public AbstractBuiltin
{
public:
    void execute(const vector<string> &options) const;
};

#endif // EXIT_H
