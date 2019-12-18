#ifndef WRAPPER_TYPES_HPP
#define WRAPPER_TYPES_HPP

#include <vector>

/* If you need to define types specific to your oroGen components, define them
 * here. Required headers must be included explicitly
 *
 * However, it is common that you will only import types from your library, in
 * which case you do not need this file
 */

namespace wrapper {
    struct ListOfDouble
    {
        std::vector<double> value;
    };
}
#endif

