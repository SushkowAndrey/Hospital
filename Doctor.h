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
		cout << "������������ �������� " << hospital.GetName() << ", ����� " << hospital.GetAdress() << endl;
		cout << "������� - " << firstName << endl;
		cout << "��� - " << lastname << endl;
		cout << "������� - " << age << endl;
		cout << "������������� - " << departament.speciality << endl;
		cout << "������������ ��������� - " << departament.name << endl;
		cout << "������������� � ��������� - " << specialization << endl;
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
