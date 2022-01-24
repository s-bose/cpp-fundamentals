#include "students.ih"

void Students::writeNames(ostream &out)
{   
    sort(
        d_vec.begin(),
        d_vec.end(),
        [&](Student const &lhs, Student const &rhs)
        {
            return strcasecmp(
                lhs.d_lastName.c_str(), // compare C-strings
                rhs.d_lastName.c_str()
            ) < 0;                      // sort last names case-insensitively
        }
    );

    for_each(
        d_vec.begin(), d_vec.end(),     // write sorted records to ostream
        [&out](Student const &student)
        {
            out << student.d_name << ' ' << student.d_lastName <<
            ' ' << student.d_studentNr << ' ' << student.d_grade << '\n';
        });
}