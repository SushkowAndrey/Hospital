#pragma once

#include <fstream>
#include <string>
#include "Doctor.h"

using namespace std;


void ExportDoctor(string file_path, string Info)
{
	ofstream FileDoctor;
	FileDoctor.open(file_path, ios::out);
	try
	{
		FileDoctor << Info << endl;
		FileDoctor.close();
	}
	catch (const exception& ex)
	{
		cout << ex.what() << endl;
	}
}

void Export(Doctor doctor[], int size)
{
	string Temp;
	for (int i = 0; i < size; i++)
	{
		Temp += doctor[i].GetfirstName() + ";";
		Temp += doctor[i].Getlastname() + ";";
		Temp += to_string(doctor[i].Getage()) + ";";
		Temp += doctor[i].Getdepartament_speciality() + ";";
		Temp += doctor[i].Getdepartament_name() + "\n";
	}
	ExportDoctor("Doctor.csv", Temp);
}