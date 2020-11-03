//
// Created by AnSt on 18.10.2020.
//

#pragma once

#include <string>
#include "Hospital.h"

using namespace std;

class MedicalStaff
{
protected:
	short age;
	string firstName;
	string lastName;
	string specialization;
	Hospital hospital;
public:
	MedicalStaff() {}
	MedicalStaff(string firstName, string lastName, short age, string specialization, Hospital hospital)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->specialization = specialization;
		if (age <= 18)
		{
			throw 18;
		}
		else
		{
			this->age = age;
		};
		this->hospital = hospital;
	}
};