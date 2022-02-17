#ifndef INCLUDED_STUDENTS_
#define INCLUDED_STUDENTS_

#include <string>
#include <vector>
#include <iosfwd>


struct Student
{
    std::string d_name;
    std::string d_lastName;
    size_t      d_studentNr;
    double      d_grade;
};

class Students
{
    std::vector<Student> d_vec;

    public:
        void read(std::string const &filename);
        void writeNames(std::ostream &out);
        void writeNrs(std::ostream &out);
};

#endif