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
		MedicalStaff(firstName, lastName, age, specialization, hospital)
	{
		this->departament = departament;
	}
	void Print()
	{
		cout << "Наименование больницы " << hospital.GetName() << ", адрес " << hospital.GetAdress() << endl;
		cout << "Фамилия - " << firstName << endl;
		cout << "Имя - " << lastName << endl;
		cout << "Возраст - " << age << endl;
		cout << "Специальность - " << departament.speciality << endl;
		cout << "Наименование отделения - " << departament.name << endl;
		cout << "Специальность в отделении - " << specialization << endl;
	}
	string GetHospitalName()
	{
		return hospital.GetName();
	}
	string GetHospitalAdress()
	{
		return hospital.GetAdress();
	}
	string GetFirstName()
	{
		return firstName;
	}
	string GetLastName()
	{
		return lastName;
	}
	int GetAge()
	{
		return age;
	}
	string GetDepartamentSpeciality()
	{
		return departament.speciality;
	}
	string GetDepartamentName()
	{
		return departament.name;
	}
	string GetSpecialization()
	{
		return specialization;
	}
};