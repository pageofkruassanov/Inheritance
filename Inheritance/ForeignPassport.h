#pragma once
#include <iostream>
#include "Passport.h"
using namespace std;
class ForeignPassport : private Passport
{
	string visa;
public:
	ForeignPassport() = delete;
	ForeignPassport(string serialNumber, string name, string surname, string birthDate, string placeBirth, string visa) : Passport{ serialNumber, name, surname, birthDate, placeBirth }, visa{ visa } {};
	void PrintForeignPassport();
};

