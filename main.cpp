// больница

#include <iostream>
#include <string>
#include "Doctor.h"
#include "Nurse.h"
#include "Interface.h"
#include "Header.h"
#include "Input.h"
#include "Export.h"

using namespace std;

Doctor ConsoleInputDoctor();
Nurse ConsoleInputNurse();

int main()
{
    system("chcp 1251 > nul");
    setlocale(LC_ALL, "ru");

    Interface interface;

    int Number_of_doctors;
    int Number_of_nurses;
    interface.PrintWelcome();
    interface.InputMedicalStuffDoctor();
    cin >> Number_of_doctors;
    Doctor* doctor = new Doctor[Number_of_doctors];
    interface.InputMedicalStuffNurse();
    cin >> Number_of_nurses;
    Nurse* nurse = new Nurse[Number_of_nurses];
    system("cls");

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
            for (int i = 0; i < Number_of_doctors; i++)
            {
                cout << "Врач " << 1 + i << endl;
                doctor[i].Print();
                cout << "============================" << endl;
            }
            cout << "Средний медперсонал " << endl;
            cout << "============================" << endl;
            for (int i = 0; i < Number_of_doctors; i++)
            {
                cout << "Медицинская сестра " << 1 + i << endl;
                nurse[i].Print();
                cout << "============================" << endl;
            }
            break;
        case 2:
            for (int i = 0; i < Number_of_doctors; i++)
            {
                cout << "Врач " << 1 + i << endl;
                doctor[i].Print();
            }
            break;
        case 3:
            for (int i = 0; i < Number_of_doctors; i++)
            {
                cout << "Медицинская сестра " << 1 + i << endl;
                nurse[i].Print();
            }
            break;
        case 4:
            for (int i = 0; i < Number_of_doctors; i++)
            {
                cout << "Врач " << 1 + i << endl;
                doctor[i] = ConsoleInputDoctor();
                system("cls");
            }
            break;
        case 5:
            for (int i = 0; i < Number_of_doctors; i++)
            {
                cout << "Медицинская сестра " << 1 + i << endl;
                nurse[i] = ConsoleInputNurse();
                system("cls");
            }
            break;
        case 6:
            Export(doctor, Number_of_doctors);
            break;
        case 7:
            break;
        case 8:
            interface.PrintExit();
            break;
        default:
            interface.PrintError("Некорректный выбор меню");
            break;
        }
    } while (Num != 0);

    delete[] doctor;
    delete[] nurse;
}