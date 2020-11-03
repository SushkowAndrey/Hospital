#pragma once

#include <fstream>
#include <string>
#include "Doctor.h"

using namespace std;


void Export(string filePath, string information)
{
	ofstream FileDoctor;
	FileDoctor.open(filePath, ios::app);
	try
	{
		FileDoctor << information << endl;
		FileDoctor.close();
	}
	catch (...)
	{
		cout << "ќшибка записи в файл" << endl;
	}
}

void ExportDoctor(vector <Doctor> doctor, int size)
{
	string temp;
	for (int i = 0; i < size; i++)
	{
		temp += doctor[i].GetHospitalName() + ";";
		temp += doctor[i].GetHospitalAdress() + ";";
		temp += doctor[i].GetFirstName() + ";";
		temp += doctor[i].GetLastName() + ";";
		temp += to_string(doctor[i].GetAge()) + ";";
		temp += doctor[i].GetDepartamentSpeciality() + ";";
		temp += doctor[i].GetDepartamentName() + ";";
		temp += doctor[i].GetSpecialization() + "\n";
	}
	Export("Doctor.csv", temp);
}

void ExportNurse(vector <Nurse> nurse, int size)
{
	string temp;
	for (int i = 0; i < size; i++)
	{
		temp += nurse[i].GetHospitalName() + ";";
		temp += nurse[i].GetHospitalAdress() + ";";
		temp += nurse[i].GetFirstName() + ";";
		temp += nurse[i].GetLastName() + ";";
		temp += to_string(nurse[i].GetAge()) + ";";
		temp += nurse[i].GetDepartamentSpeciality() + ";";
		temp += nurse[i].GetDepartamentName() + ";";
		temp += nurse[i].GetSpecialization() + "\n";
	}
	Export("Nurse.csv", temp);
}