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
        istringstream ss(line);     // process each word in line using stringstream
                                    // read four words
        if (ss >> fname >> lname >> number >> grade)
        {
            d_vec.push_back({fname, lname, number, grade });
        }
        else
        {
            istringstream ss(line);
                                    // read five words
            if (ss >> fname >> mname >> lname >> number >> grade)
            {
                d_vec.push_back({fname + " " + mname, lname, number, grade});
            }
        }
    }
}