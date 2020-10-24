#pragma once

#include <string>

using namespace std;

class Hospital {
private:
    string name;
    string adress;
public:
    Hospital() {}
    Hospital(string name, string adress)
    {
        this->name = name;
        this->adress = adress;
    }
    string GetName()
    {
        return name;
    }
    string GetAdress()
    {
        return adress;
    }
};
