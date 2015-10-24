#include "string_compression.cc"
#include <iostream>

int main()
{
    std::string s1("aabcccccaaa");
    std::cout << stringCompression(s1) << std::endl;

    return 0;
}
