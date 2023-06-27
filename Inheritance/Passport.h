#pragma once
#include <iostream>
using namespace std;
class Passport
{
protected:
	string serialNumber;
	string name;
	string surname;
	string birthDate;
	string placeBirth;
public:
	Passport() = delete;
	Passport(string serialNumber, string name, string surname, string birthDate, string placeBirth) : serialNumber{ serialNumber }, name{ name }, surname{ surname }, birthDate{ birthDate }, placeBirth{ placeBirth } {};
	void PrintPassport();

};

