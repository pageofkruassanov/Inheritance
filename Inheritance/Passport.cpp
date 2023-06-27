#include "Passport.h"

void Passport::PrintPassport()
{
	cout << "Serial number: " << serialNumber << endl;
	cout << "Surname, Name: " << surname << " " << name << endl;
	cout << "Birth date: " << birthDate << endl;
	cout << "Place of birth " << placeBirth << endl;
}
