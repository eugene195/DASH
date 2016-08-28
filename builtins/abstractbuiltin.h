#ifndef ABSTRACTBUILTIN_H
#define ABSTRACTBUILTIN_H

#include <vector>
#include <string>

using namespace std;

class AbstractBuiltin
{
public:
    virtual void execute(const vector<string> &options) const = 0;
    virtual ~AbstractBuiltin() {}
};

#endif // ABSTRACTBUILTIN_H
