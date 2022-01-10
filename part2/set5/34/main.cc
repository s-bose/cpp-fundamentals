#include <iostream>
#include "strings/strings.h"


int main(int argc, char **argv)
{
    Strings str_list(argc, argv);
    str_list += "world";
    // str_list.printStrs();
    Strings str2 = str_list;
    // str2.printStrs();
    Strings str3(std::move(str2));
    // str3.printStrs();
    Strings str4(str3);
    // str4.printStrs();
    std::cout << str4.size() << '\n';
    std::cout << str4.at(2) << '\t' << str4[0] << '\n';
    str4[0] = "bose";
    str4.printStrs();
}