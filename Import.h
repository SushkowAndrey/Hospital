#pragma once

#include <fstream>
#include <string>
#include <vector>
#include "Doctor.h"

using namespace std;

//Doctor 
void ImportFromFile(string filePpath) {
	ifstream File;
	string temp;
	vector <string> NewTemp;
	int position;
	try
	{
		File.open(filePpath, ios::in);
		while (!File.eof())
		{
			File >> temp;
			for (int i = 0; i < temp.size(); i++)
			{
				position = temp.find(";");
				NewTemp.push_back(temp.substr(0, position));
				temp = temp.substr(position + 1);
			}
		}
		File.close();
	}
	catch (...)
	{
		cout << "Файл не открыт" << endl;
	}
}