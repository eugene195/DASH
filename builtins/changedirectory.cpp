#include "changedirectory.h"
#include <unistd.h>

void ChangeDirectory::execute(const vector<string> &options) const
{
    if (options.empty()) {

        /**
         * FIXME
         * CD to HOME
         */

    } else {
        string path = options.at(0);
        int rc = chdir(path.c_str());
        if (rc < 0) {

            /**
             * FIXME
             * handle error. use errno to determine problem
             */

        }
    }
}
