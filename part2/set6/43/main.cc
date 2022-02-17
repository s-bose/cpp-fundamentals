#include "students/students.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    Students students;
    students.read(argv[1]);
    students.writeNames(cout);
    cout << "\n\n";
    students.writeNrs(cout);
}