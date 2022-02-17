#include "quicksort.ih"

string lower(string const &str)
{
    string strLow;
    
    for 
    (
      auto iter = str.begin();
      iter != str.end();
      ++iter 
    )                       // converts str to lowercase
      strLow += tolower(*iter);
  
    return strLow;
}
