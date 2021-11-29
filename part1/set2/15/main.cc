#include <iostream>
#include <string>

using namespace std;

enum UTFMasks : char
{
    // mask to inspect a char's leftmost 2 bits: if found the char is
    // byte 0 of a utf-8 code point
    UTFBytes = static_cast<char>(0b11000000u),

    // continuation chars have their MSB set, but their next bit unset.
    UTFbytes1_3 = static_cast<char>(0b10000000u),
};


int main()
{
    while (true) // continue until done
    {
        string line;

        if (not getline(cin, line)) // read the next line
            break;                  // done when all lines were read

        size_t end = line.length(); // beyond the string
        size_t begin = end;         // utf chars are from 'begin' to 'end'

        // since end is beyond the utf string
        while (end != 0) // stop once we've reached index 0
        {
            // (character & UTFbytes): keeps the 2 highest bits. For
            // bytes 1..3 this matches the UTFbytes1_3 mask. The loop ends
            // at the failing match of byte 0: ascii char or utf-8 byte 0
            while ((line[--begin] & UTFMasks::UTFBytes) == UTFMasks::UTFbytes1_3)
                ;

            cout << line.substr(begin, end - begin);
            end = begin;
        }

        cout << '\n'; // end the line
    }
}