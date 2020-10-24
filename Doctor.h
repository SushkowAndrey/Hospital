#pragma once

#include <string>
#include "MedicalStaff.h"
#include "Department.h"

using namespace std;

class Doctor : public MedicalStaff
{
public:
	Department departament;
	Doctor() {}
	Doctor(string firstName, string lastname, short age, string specialization, Department departament, Hospital hospital) :
		MedicalStaff(firstName, lastname, age, specialization, hospital)
	{
		this->departament = departament;
	}
	void Print()
	{
		cout << "Наименование больницы " << hospital.GetName() << ", адрес " << hospital.GetAdress() << endl;
		cout << "Фамилия - " << firstName << endl;
		cout << "Имя - " << lastname << endl;
		cout << "Возраст - " << age << endl;
		cout << "Специальность - " << departament.speciality << endl;
		cout << "Наименование отделения - " << departament.name << endl;
		cout << "Специальность в отделении - " << specialization << endl;
	}
	string GetfirstName()
	{
		return firstName;
	}
	string Getlastname()
	{
		return lastname;
	}
	int Getage()
	{
		return age;
	}
	string Getdepartament_speciality()
	{
		return departament.speciality;
	}
	string Getdepartament_name()
	{
		return departament.name;
	}
};
