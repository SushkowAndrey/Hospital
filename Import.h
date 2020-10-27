#pragma once

#include <fstream>
#include <string>

using namespace std;

void ImportFromFile(string file_path) {
	ifstream File;
	string Temp;
	int pos;

	try
	{
		File.open(file_path, ios::in);
		while (!File.eof())
		{
			File >> Temp;

			pos = Temp.find(";");
			string hospitalName = Temp.substr(0, pos);

			string Temp2 = Temp.substr(pos + 1);
			pos = Temp2.find(";");
			string hospitalAddress = Temp2.substr(0, pos);

			string Temp3 = Temp2.substr(pos + 1);
			pos = Temp3.find(";");
			string firstName = Temp3.substr(0, pos);

			string Temp4 = Temp3.substr(pos + 1);
			pos = Temp4.find(";");
			string lastname = Temp4.substr(0, pos);

			string Temp5 = Temp4.substr(pos + 1);
			pos = Temp5.find(";");
			string age = Temp5.substr(0, pos);

			string Temp6 = Temp5.substr(pos + 1);
			pos = Temp6.find(";");
			string departament_speciality = Temp6.substr(0, pos);

			string Temp7 = Temp6.substr(pos + 1);
			pos = Temp7.find(";");
			string departament_name = Temp7.substr(0, pos);

			string Temp8 = Temp7.substr(pos + 1);
			pos = Temp8.find(";");
			string specialization = Temp8.substr(0, pos);

			cout << hospitalName << ", " << hospitalAddress << " " << firstName << " " << lastname << endl;
	
		}

		File.close();
	}
	catch (const std::exception&ex)
	{
		cout << ex.what() << endl;
		cout << "Файл не открыт" << endl;
	}













}