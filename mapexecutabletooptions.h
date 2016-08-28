#ifndef MAPCOMMANDTOOPTIONS_H
#define MAPCOMMANDTOOPTIONS_H

#include "abstractprocessingstep.h"
#include "builtins/abstractbuiltin.h"
#include "builtins/changedirectory.h"
#include "builtins/exit.h"
#include "builtins/printworkingdirectory.h"
#include <map>

class MapExecutableToOptions : public AbstractProcessingStep
{

public:
    MapExecutableToOptions() :
        builtins {
            make_pair("cd", new ChangeDirectory),
            make_pair("exit", new Exit),
            make_pair("pwd", new PrintWorkingDirectory)
        }
    {}

    ~MapExecutableToOptions() {
        for (auto it : builtins) {
            delete it.second;
        }
    }

    UserInput processCommand (UserInput &input);

private:
    AbstractBuiltin* getBuiltin (const string executable);

    map <string, AbstractBuiltin*> builtins;
};

#endif // MAPCOMMANDTOOPTIONS_H
