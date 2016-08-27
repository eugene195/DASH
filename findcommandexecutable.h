#ifndef FINDCOMMANDEXECUTABLE_H
#define FINDCOMMANDEXECUTABLE_H

#include "abstractprocessingstep.h"

class FindCommandExecutable : public AbstractProcessingStep
{
public:
    Command processCommand (Command &command);
};

#endif // FINDCOMMANDEXECUTABLE_H
