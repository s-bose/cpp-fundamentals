#include "students.ih"

void Students::writeNrs(ostream &out)
{
    vector<size_t> studentNumbers(d_vec.size());
    iota(studentNumbers.begin(), studentNumbers.end(), 0);
    sort(
        studentNumbers.begin(), studentNumbers.end(),
        [&](size_t idxL, size_t idxR)
        {
            return d_vec[idxL].d_studentNr < d_vec[idxR].d_studentNr;
        }
    );

    for_each(
        studentNumbers.begin(), studentNumbers.end(),
        [&](size_t idx)
        {
            out << d_vec[idx].d_studentNr << '\t' << d_vec[idx].d_grade << '\n';
        }
    );
}