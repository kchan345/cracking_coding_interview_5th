#include <iostream>

void reverse(char* str)
{
    // get a pointer to start and end of the string.

    char* start_pointer = str-1; // compactify code in the while loop
    char* end_pointer = str;

    while (*end_pointer)
        ++end_pointer;
    
    // end_pointer points to null character. Decrement it once before use.

    while ( start_pointer++ < --end_pointer )
    {
        char temp = *start_pointer;
        *start_pointer = *end_pointer;
        *end_pointer = temp;
    }

    return;

}
