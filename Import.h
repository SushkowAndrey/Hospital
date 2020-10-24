#pragma once

#include <fstream>
#include <string>

using namespace std;
/*
string ImportFromFile(string path) {
    ifstream file;

    file.open(path, ios::in);

    if (!file.is_open())
    {
        //TODO создание исключения
    }
    else
    {
        string temp;
        int pos;
        while (!file.eof())
        {
            file >> temp;

            //
            //cout << temp;

            pos = temp.find(";");
            string lastName = temp.substr(0, pos);

            string temp2 = temp.substr(pos + 1);
            pos = temp2.find(";");
            string firstName = temp2.substr(0, pos);

            string temp3 = temp2.substr(pos + 1);
            pos = temp3.find(";");
            string dateBirth = temp3.substr(0, pos);

            string temp4 = temp3.substr(pos + 1);
            pos = temp4.find(";");
            string age = temp4.substr(0, pos);

            string temp5 = temp4.substr(pos + 1);
            pos = temp5.find(";");
            string faculty = temp5.substr(0, pos);

            //cout << lastName << " " << firstName << " " << dateBirth << " " << age << endl;

        }
        file.close();
    }




}*/