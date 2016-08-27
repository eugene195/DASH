#ifndef MAPCOMMANDTOOPTIONS_H
#define MAPCOMMANDTOOPTIONS_H

#include "abstractprocessingstep.h"

class MapExecutableToOptions : public AbstractProcessingStep
{
public:
    Command processCommand (Command &command);

};

#endif // MAPCOMMANDTOOPTIONS_H
