#include "rotation_substring.cc"

int main()
{
    std::string str("waterbottle");
    std::string substri("erbottlewat");

    std::cout << rotationSubstring(str, substri) << std::endl;

    return 0;
}
