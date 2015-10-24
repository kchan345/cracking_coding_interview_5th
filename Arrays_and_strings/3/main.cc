#include "string_permu.cc"
#include <iostream>

int main()
{
    // sample test

    std::string s1("cdccefg");
    std::string s2("gfedccc");

    std::string s3("aabdefg");

    std::cout << isPermutation(s1, s2) << ":" << isPermutation(s2,s3) << std::endl;



    return 0;
}
