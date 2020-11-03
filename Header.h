#pragma once
#include <iostream>
#include <string>
#include "Doctor.h"
#include "Nurse.h"
#include "Input.h"

using namespace std;

//проверка корректности введенного числа
int CheckingTheSymbol(string enterSymbol)
{
    if (enterSymbol.size() != 1) return -1; //значения -1 в меню нет, поэтому для отработки цикла switch/case возвращаем дл¤ примера число -1
    else {
        int number;
        for (int i = 0; i < enterSymbol.size(); i++)
        {
            number = enterSymbol[i];
        }
        if (number > 47 && number < 56) {
            return number - '0';
        }
        else return -1;
    }
}

//проверка корректности введенной буквы
char CheckingTheSymbolYN(string enterSymbol)
{
    if (enterSymbol.size() != 1) return ' '; //значения пробел в меню нет, поэтому для отработки цикла switch/case возвращаем дл¤ примера число -1
    else {
        int number;
        for (int i = 0; i < enterSymbol.size(); i++)
        {
            number = enterSymbol[i];
        }
        if (number == 89) {
            return 'Y';
        }
        else if (number == 78) {
            return 'N';
        }
        else return ' ';
    }
}

//ввод данных в вектор в программе
vector <Doctor> Input(vector <Doctor> doctor)
{
    string symbol;
    char letter;
    do
    {
        doctor.push_back(ConsoleInputDoctor());
        cout << "Внести данные о другом враче? (Y/N)" << endl;
        cin >> symbol;
        letter = CheckingTheSymbolYN(symbol);
        if (letter == 'N') break;
    } while (letter == 'Y');
    system("cls");
    return doctor;
}
//вывод вектора
void Output(vector <Doctor> doctor)
{
    cout << "Врачебный медперсонал " << endl;
    cout << "============================" << endl;
    for (auto element : doctor)
    {
        element.Print();
    }
}

vector <Nurse> Input(vector <Nurse> nurse)
{
    string symbol;
    char letter;
    do
    {
        nurse.push_back(ConsoleInputNurse());
        cout << "Внести данные о другой медсестре? (Y/N)" << endl;
        cin >> symbol;
        letter = CheckingTheSymbolYN(symbol);
        if (letter == 'N') break;
    } while (letter == 'Y');
    system("cls");
    return nurse;
}
//вывод вектора
void Output(vector <Nurse> nurse)
{
    cout << "Средний медперсонал " << endl;
    cout << "============================" << endl;
    for (auto element : nurse)
    {
        element.Print();
    }
}
