#pragma once
#include <iostream>
#include <string>

using namespace std;

class Interface
{
public:
    void PrintWelcome()
    {
        cout << "============================" << endl;
        cout << "=== Медицинский персонал ===" << endl;
        cout << "============================" << endl;
        cout << endl;
    }
    void PrintMenu()
    {
        cout << "+++++++++++++++++++++++++++" << endl;
        cout << "Меню:" << endl;
        cout << "1. Посмотреть весь медперсонал" << endl;
        cout << "2. Посмотреть врачебный медперсонал" << endl;
        cout << "3. Посмотреть средний медперсонал" << endl;
        cout << "4. Добавить врача" << endl;
        cout << "5. Добавить медсестру" << endl;
        cout << "6. Экспорт в файл" << endl;
        cout << "7. Импорт из файла" << endl;
        cout << "0. Выход" << endl;
        cout << "+++++++++++++++++++++++++++" << endl;
    }
    void PrintError(string message)
    {
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        cout << "!!!!!!!!!! E R R O R !!!!!!!!!!" << endl;
        cout << "!!! " << message << " !!!" << endl;
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        cout << endl;
    }
    void PrintExit()
    {
        cout << endl;
        cout << "-----------------" << endl;
        cout << "--- Good byе! ---" << endl;
        cout << "-----------------" << endl;
        cout << endl;
    }

};

