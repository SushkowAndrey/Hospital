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
    int Num;

    do {
        interface.PrintMenu();
        cout << "Введите пункт меню - ";
        cin >> symbol;
        Num = Checking_the_symbol(symbol);
        system("cls");
        switch (Num)
        {
        case 1:
            cout << "Врачебный медперсонал " << endl;
            cout << "============================" << endl;
            for (auto element : doctor)
            {
                element.Print();
            }
            cout << "Средний медперсонал " << endl;
            cout << "============================" << endl;
            for (auto element : nurse)
            {
                element.Print();
            }
            break;
        case 2:
            for (auto element : doctor)
            {
                element.Print();
            }
            break;
        case 3:
            for (auto element : nurse)
            {
                element.Print();
            }
            break;
        case 4:
            char Sym;
            do
            {
                doctor.push_back(ConsoleInputDoctor());
                cout << "Внести данные о другом враче? (Y/N)" << endl;
                cin >> Sym;
            } while (Sym != 'N');
            break;
        case 5:
            char Sym_1;
            do
            {
                nurse.push_back(ConsoleInputNurse());
                cout << "Внести данные о другой медсестре? (Y/N)" << endl;
                cin >> Sym_1;
            } while (Sym_1 != 'N');
            break;
        case 6:
            ExportDoctor(doctor, doctor.size());
            //ExportNurse(nurse, nurse.size());
            break;
        case 7:
            ImportFromFile("Doctor.csv");
            break;
        case 8:
            interface.PrintExit();
            break;
        default:
            interface.PrintError("Некорректный выбор меню");
            break;
        }
    } while (Num != 0);

}