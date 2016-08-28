#include "mapexecutabletooptions.h"
#include "command.h"

UserInput MapExecutableToOptions::processCommand(UserInput &input)
{
    /**
      FIXME
      Pipeline logics goes here
      */

    /*
 * Single command algorithm
 *
*/
    auto tokenIterator = input.getTokens().begin();
    Command command(
                *tokenIterator,
                vector<string>(
                    tokenIterator + 1,
                    input.getTokens().end()));

    input.appendCommand(command);
    return input;
}
