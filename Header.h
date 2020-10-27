#pragma once
#include <iostream>
#include <string>

using namespace std;

int Checking_the_symbol(string M)
{
    if (M.size() != 1) return 10; //значения 10 в меню нет, поэтому для отработки цикла switch/case возвращаем для примера число 10
    else {
        int Num;
        for (int i = 0; i < M.size(); i++)
        {
            Num = M[i];
        }
        if (Num > 47 && Num < 56) {
            return Num - '0';
        }
        else return 10;
    }
}
