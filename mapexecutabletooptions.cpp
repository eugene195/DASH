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
    AbstractBuiltin* builtin = getBuiltin(*tokenIterator);

    Command command(
                *tokenIterator,
                vector<string>(
                    tokenIterator + 1,
                    input.getTokens().end()),
                builtin);

    input.appendCommand(command);
    return input;
}

AbstractBuiltin *MapExecutableToOptions::getBuiltin(const string executable) {
    auto it = builtins.find(executable);
    AbstractBuiltin* result = nullptr;

    if(it != builtins.end()) {
       result = it->second;
    }

    return result;
}
