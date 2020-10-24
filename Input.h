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
    cout << "¬ведите фамилию - "; cin >> firstName;
    cout << "¬ведите им€ - "; cin >> lastName;
    cout << "¬ведите возраст - "; cin >> age;
    cout << "¬ведите специальность - "; cin >> specialization;

    cout << "¬ведите наименование отделени€ - "; cin >> name;
    cout << "¬ведите специальность отделени€ - "; cin >> speciality;

    cout << "¬ведите название больницы - "; cin >> nameOfHospital;
    cout << "¬ведите адрес больницы - "; cin >> adress;

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
    cout << "¬ведите фамилию - "; cin >> firstName;
    cout << "¬ведите им€ - "; cin >> lastName;
    try
    {
        cout << "¬ведите возраст - "; cin >> age;
    }
    catch (...)
    {
        cout << "ќшибка" << endl;
    }

    cout << "¬ведите специальность - "; cin >> specialization;

    cout << "¬ведите наименование отделени€ - "; cin >> name;
    cout << "¬ведите специальность отделени€ - "; cin >> speciality;

    cout << "¬ведите название больницы - "; cin >> nameOfHospital;
    cout << "¬ведите адрес больницы - "; cin >> adress;

    Hospital hospital(nameOfHospital, adress);
    Department departament(name, speciality);
    Nurse nurse(firstName, lastName, age, specialization, departament, hospital);
    return nurse;
}