#include "main.ih"

void caller(Base &obj)
{                       // cast to Derived ref to access
                        // Derived's member functions
    Derived &dref = static_cast<Derived &>(obj);
    dref.hello();
}
