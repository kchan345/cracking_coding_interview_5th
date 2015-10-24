#include <unordered_map>

bool isPermutation(std::string& s1, std::string& s2)
{
    if (s1.size() != s2.size())
        return false;

    // use hash map, and compare char count.


    std::unordered_map<char, int> s1map, s2map;

    for (unsigned int i=0; i < s1.size(); ++i) // s1 and s2 same size.
    {
        ++s1map[s1[i]];
        ++s2map[s2[i]];
    }

    // run along one of the string and check count.
    
    for (unsigned int i=0; i < s1.size(); ++i)
    {
        if (s1map[s1[i]] != s2map[s1[i]])
            return false;
    }

    return true;


}
