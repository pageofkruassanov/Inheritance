#pragma once
#include <iostream>
#include "Student.h"
using namespace std;
class Aspirant : private Student
{
	string thesisTopic;
public:
	Aspirant() = delete;
	Aspirant(string name, string surname, string birthDate, float avarage, string thesisTopic) : Student{ name, surname, birthDate, avarage }, thesisTopic{ thesisTopic } {};
	void PrintAspirant();
};

