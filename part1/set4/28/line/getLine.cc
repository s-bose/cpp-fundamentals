#include "line.ih"

bool Line::getLine()
{
    string whitespaces{" \t\r\n"};

    string str;
    std::getline(cin, str);
                        // check if line contains atleast one non-ws 
    if (str.find_first_not_of(whitespaces) != string::npos)
    {
        ss << str;      // store line in string stream
        return true;
    }
    
    return false;
}