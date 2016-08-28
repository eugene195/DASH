#ifndef MAPCOMMANDTOOPTIONS_H
#define MAPCOMMANDTOOPTIONS_H

#include "abstractprocessingstep.h"

class MapExecutableToOptions : public AbstractProcessingStep
{
public:
    UserInput processCommand (UserInput &input);

};

#endif // MAPCOMMANDTOOPTIONS_H
