#pragma once
#include <iostream>
#include <string>
#include "MedicalStaff.h"
#include "Department.h"

using namespace std;

class Nurse : public MedicalStaff
{
public:
	Department departament;
	Nurse() {}
	Nurse(string firstName, string lastname, short age, string specialization, Department departament, Hospital hospital) :
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
};