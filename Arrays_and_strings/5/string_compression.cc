#include <string>
#include <sstream>

std::string stringCompression(const std::string &s1)
{
    if ( s1.size() <= 1)
        return s1;

    std::string s2;
    std::stringstream sst;

    int char_count = 1;
    char cur_char = s1[0];

    int i=0;

    while ( i < s1.size() )
    {
        cur_char = s1[i];

        while ( ++i < s1.size() && s1[i] == cur_char )
            ++char_count;

        sst << cur_char << char_count;

        char_count = 1;
    }

    s2 = sst.str();

    return s1.size() > s2.size()? s2:s1;

}
