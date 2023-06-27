#include <iostream>
#include "Aspirant.h"
#include "ForeignPassport.h"

int main()
{
    Aspirant asp("Pavlo","Khasanov", "18.08.1999", 10.4f, ".Net");
    asp.PrintAspirant();
    cout << endl << "----------------------------" << endl;
    ForeignPassport pass("KD92044", "PAVLO", "KHASANOV", "18.08.1999", "Ukraine, Odeska oblast, Kiliya", "Germany");
    pass.PrintForeignPassport();
}
