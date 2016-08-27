#include "mapexecutabletooptions.h"

Command MapExecutableToOptions::processCommand(Command &command)
{
    /**
      FIXME
      Pipeline logics goes here
      */

/*
 * Single command algorithm
 *
*/
    auto tokenIterator = command.getTokens().begin();
    command.addOptionsToExecutable(
                *tokenIterator,
                vector<string>(
                    tokenIterator + 1,
                    command.getTokens().end()
                )
    );
    command.addExecutable(*command.getTokens().begin());

    return command;
}
