#include "unique_strings.h"
#include <unordered_map>

bool isUnique(std::string& string)
{
    // use a ASCII vector or hash map to store seen character.
    //

    std::unordered_map<char, bool> charMap;

    for (auto i:string)
    {
        if (charMap[i] == 1)
            return false;
        ++charMap[i];
    }

    return true;
}
