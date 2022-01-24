#include "students.ih"

void Students::writeNames(ostream &out)
{   
    sort(
        d_vec.begin(),
        d_vec.end(),
        [&](Student const &lhs, Student const &rhs)
        {
            return strcasecmp(
                lhs.d_lastName.c_str(),
                rhs.d_lastName.c_str()
            ) < 0;
        }
    );

    for_each(
        d_vec.begin(), d_vec.end(),
        [&out](Student const &student)
        {
            out << student.d_name << ' ' << student.d_lastName <<
            ' ' << student.d_studentNr << ' ' << student.d_grade << '\n';  
        }
    );
}