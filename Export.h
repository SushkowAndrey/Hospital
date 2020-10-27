#pragma once

#include <fstream>
#include <string>
#include "Doctor.h"

using namespace std;


void Export(string file_path, string Info)
{
	ofstream FileDoctor;
	FileDoctor.open(file_path, ios::app);
	try
	{
		FileDoctor << Info << endl;
		FileDoctor.close();
	}
	catch (...)
	{
		cout << "Ошибка записи в файл" << endl;
	}
}

void ExportDoctor(vector <Doctor> doctor, int size)
{
	string Temp;
	for (int i = 0; i < size; i++)
	{
		Temp += doctor[i].GethospitalName() + ";";
		Temp += doctor[i].GethospitalAdress() + ";";
		Temp += doctor[i].GetfirstName() + ";";
		Temp += doctor[i].Getlastname() + ";";
		Temp += to_string(doctor[i].Getage()) + ";";
		Temp += doctor[i].Getdepartament_speciality() + ";";
		Temp += doctor[i].Getdepartament_name() + ";";
		Temp += doctor[i].Getspecialization() + "\n";
	}
	Export("Doctor.csv", Temp);
}

void ExportNurse(vector <Nurse> nurse, int size)
{
	string Temp;
	for (int i = 0; i < size; i++)
	{
		Temp += nurse[i].GethospitalName() + ";";
		Temp += nurse[i].GethospitalAdress() + ";";
		Temp += nurse[i].GetfirstName() + ";";
		Temp += nurse[i].Getlastname() + ";";
		Temp += to_string(nurse[i].Getage()) + ";";
		Temp += nurse[i].Getdepartament_speciality() + ";";
		Temp += nurse[i].Getdepartament_name() + ";";
		Temp += nurse[i].Getspecialization() + "\n";
	}
	Export("Nurse.csv", Temp);
}