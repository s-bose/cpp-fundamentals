#ifndef INCLUDED_STUDENT_
#define INCLUDED_STUDENT_

#include <string>

class Student
{
    std::string d_name;
    std::string d_lastName;
    size_t d_studentNr;
    double d_grade;

    public:
        Student();

        friend std::istream &operator>>(std::istream &in, Student &student);
    private:
};

std::istream &operator>>(std::istream &in, Student &student)
{
    
}
        
#endif
