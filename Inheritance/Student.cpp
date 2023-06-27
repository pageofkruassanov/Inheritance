#include "Student.h"

string& Student::getName()
{
    return name;
}

string& Student::getSurname()
{
    return surname;
}

string& Student::getBirthDate()
{
    return birthDate;
}

float& Student::getAvarage()
{
    return avarage;
}

void Student::PrintStudent()
{
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Bith date: " << birthDate << endl;
}
