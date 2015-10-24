#include "replace_space.cc"
#include <iostream>

int main()
{
    std::string s1("Mr John Smith");

    replaceSpace(s1);

    std::cout << s1 << std::endl;
    return 0;
}
