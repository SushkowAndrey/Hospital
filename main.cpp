// больница

#include <iostream>
#include <string>
#include <vector>
#include "Doctor.h"
#include "Nurse.h"
#include "Interface.h"
#include "Header.h"
#include "Input.h"
#include "Export.h"
#include "Import.h"

using namespace std;


int main()
{
    system("chcp 1251 > nul");
    setlocale(LC_ALL, "ru");
    Interface interface;
    
    vector <Doctor> doctor;
    vector <Nurse> nurse;
    
    string symbol;
    int number;

    do {
        interface.PrintMenu();
        cout << "Введите пункт меню - ";
        cin >> symbol;
        number = CheckingTheSymbol(symbol);
        system("cls");
        switch (number)
        {
        case 1:
            Output(doctor);
            Output(nurse);
            break;
        case 2:
            Output(doctor);
            break;
        case 3:
            Output(nurse);
            break;
        case 4:
            Input(doctor);
            break;
        case 5:
            Input(nurse);
            break;
        case 6:
            ExportDoctor(doctor, doctor.size());
            ExportNurse(nurse, nurse.size());
            break;
        case 7:
            ImportFromFile("Doctor.csv");
            break;
        case 0:
            interface.PrintExit();
            break;
        default:
            interface.PrintError("Некорректный выбор меню");
            break;
        }
    } while (number != 0);

}