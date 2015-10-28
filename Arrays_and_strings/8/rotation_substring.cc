#include <string>
#include <iostream>

bool isSubstring(std::string str, std::string subStri)
{
    if (subStri.size() > str.size())
        return false;
    // check if string contains substring.
    for (int i=0; i<str.size(); ++i)
    {
        if ( str[i] == subStri[0] )
        {
            if ( str.compare(i,subStri.size(), subStri ) == 0)
                return true;
        }

    }

    return false;
}

bool rotationSubstring(std::string str, std::string str2)
{
    // append str to str, and check if this string contains str2 to check it is a rotated string.
    if ( str.size() != str2.size() )
        return false;

    std::string str_full = str+str;

    if ( isSubstring(str_full, str2) )
        return true;
    else
        return false;
}
