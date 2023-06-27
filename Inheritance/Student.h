#pragma once
#include <iostream>
using namespace std;
class Student
{
protected:
	string name;
	string surname;
	string birthDate;
	float avarage;
public:
	Student() = delete;
	Student(string name, string surname, string birthDate, float avarage) : name{ name }, surname{ surname }, birthDate{ birthDate }, avarage{ avarage } {};
	string& getName();
	string& getSurname();
	string& getBirthDate();
	float& getAvarage();
	void PrintStudent();
};

