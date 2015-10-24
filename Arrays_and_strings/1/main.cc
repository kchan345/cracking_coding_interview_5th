#include "unique_strings.h"

// test code

#include <iostream>

int main()
{
    std::string test1("Apple");
    std::string test2("Orange");

    std::cout << isUnique(test1) << ":" << isUnique(test2) << std::endl;

    return 0;
}
