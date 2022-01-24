#include "students.ih"

void Students::read(string const &filename)
{
    string fname;
    string mname;
    string lname;
    size_t number;
    float grade;

    ifstream ifs{ filename };
    string line;

    while (getline(ifs, line))
    {
        istringstream ss(line);
        if (ss >> fname >> lname >> number >> grade)
        {
            d_vec.push_back({fname, lname, number, grade });
        }
        else
        {
            istringstream ss(line);
            if (ss >> fname >> mname >> lname >> number >> grade)
            {
                d_vec.push_back({fname + " " + mname, lname, number, grade});
            }
        }
    }
}