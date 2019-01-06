//
//  Patients.cpp
//  22BHW5C
//
//  Created by Albert Liu on 11/6/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#include "Patient.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;   

Patient:: Patient()
{
    name = "null";
    height = 0;
    age = 0;
    weight = 0;
}

Patient:: Patient(string n, int a, double h, int w)
{
    name = n;
    height = h;
    age = a;
    weight = w;
}

// print out patient's information
void Patient:: print() const
{
    cout << "Patient name:" << name << endl;
    cout << " \tAge: " << age << endl;
    cout << " \tHeight: " << height << " Weight: " << weight << endl;
    cout << " \tWeight Status: " << weightStatus();
    cout << "\n";
}

// set name of the patients
void Patient:: setName(string newname)
{
    name = newname;
}

// set age of the patients
void Patient:: setAge(int a)
{
    age = a;
}

// set weight of the patients
void Patient:: setWeight(int w)
{
    weight = w;
}

// set height of the patients
void Patient:: setHeight(double h)
{
    height = h;
}

// set name of the patients
string Patient:: getName() const
{
    return name;
}

// get age of the patients
int Patient:: getAge() const
{
    return age;
}

// get weight of the patients
double Patient:: getHeight() const
{
    return height;
}

// get weight of the patients
int Patient:: getWeight() const
{
    return weight;
}

// calculate BMI
string Patient:: weightStatus() const
{
    double BMI = weight * 703 / (height * height);
    
    if (BMI < 18.5)
    {
        return "Underweight";
    }
    else if (BMI > 18.5 && BMI < 24.9)
    {
        return "Normal";
    }
    else if (BMI > 25 && BMI < 29.9)
    {
        return "Overweight";
    }
    else
    {
        return "Obese";
    }
}

