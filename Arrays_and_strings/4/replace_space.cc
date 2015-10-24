#include <string>

void replaceSpace(std::string &s1)
{
    std::string spaceReplace("%20");
    for (unsigned int i = 0; i < s1.size(); ++i)
    {
        if( s1[i] == ' ' )
        {
            s1.replace(i,1,spaceReplace);
        }
    }

    return;
}
