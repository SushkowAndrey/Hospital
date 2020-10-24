#pragma once
#include <iostream>
#include <string>
#include "Doctor.h"
#include "Nurse.h"

using namespace std;

Doctor ConsoleInputDoctor()
{
    string firstName, lastName, specialization;
    string name, speciality;
    string nameOfHospital, adress;
    int age;
    cout << "������� ������� - "; cin >> firstName;
    cout << "������� ��� - "; cin >> lastName;
    cout << "������� ������� - "; cin >> age;
    cout << "������� ������������� - "; cin >> specialization;

    cout << "������� ������������ ��������� - "; cin >> name;
    cout << "������� ������������� ��������� - "; cin >> speciality;

    cout << "������� �������� �������� - "; cin >> nameOfHospital;
    cout << "������� ����� �������� - "; cin >> adress;

    Hospital hospital(nameOfHospital, adress);
    Department departament(name, speciality);
    Doctor doctor(firstName, lastName, age, specialization, departament, hospital);
    return doctor;
}

Nurse ConsoleInputNurse()
{
    string firstName, lastName, specialization;
    string name, speciality;
    string nameOfHospital, adress;
    int age;
    cout << "������� ������� - "; cin >> firstName;
    cout << "������� ��� - "; cin >> lastName;
    try
    {
        cout << "������� ������� - "; cin >> age;
    }
    catch (...)
    {
        cout << "������" << endl;
    }

    cout << "������� ������������� - "; cin >> specialization;

    cout << "������� ������������ ��������� - "; cin >> name;
    cout << "������� ������������� ��������� - "; cin >> speciality;

    cout << "������� �������� �������� - "; cin >> nameOfHospital;
    cout << "������� ����� �������� - "; cin >> adress;

    Hospital hospital(nameOfHospital, adress);
    Department departament(name, speciality);
    Nurse nurse(firstName, lastName, age, specialization, departament, hospital);
    return nurse;
}