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

    cout << "Введите фамилию - "; cin >> firstName;
    cout << "Введите имя - "; cin >> lastName;
    cout << "Введите возраст - "; cin >> age;
    cout << "Введите специальность - "; cin >> specialization;
    cout << "Введите наименование отделения - "; cin >> name;
    cout << "Введите специальность отделения - "; cin >> speciality;
    cout << "Введите название больницы - "; cin >> nameOfHospital;
    cout << "Введите адрес больницы - "; cin >> adress;

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

    cout << "Введите фамилию - "; cin >> firstName;
    cout << "Введите имя - "; cin >> lastName;
    cout << "Введите возраст - "; cin >> age;
    cout << "Введите специальность - "; cin >> specialization;
    cout << "Введите наименование отделения - "; cin >> name;
    cout << "Введите специальность отделения - "; cin >> speciality;
    cout << "Введите название больницы - "; cin >> nameOfHospital;
    cout << "Введите адрес больницы - "; cin >> adress;

    Hospital hospital(nameOfHospital, adress);
    Department departament(name, speciality);
    Nurse nurse(firstName, lastName, age, specialization, departament, hospital);
    return nurse;
}