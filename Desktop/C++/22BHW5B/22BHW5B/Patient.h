//
//  Patients.hpp
//  22BHW5B
//
//  Created by Albert Liu on 11/6/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#ifndef Patient_h
#define Patient_h

#include <stdio.h>
#include <string>

using namespace std;

class Patient
{
private:
    string name;
    double height;
    int age, weight;
public:
    Patient();
    Patient(string n, int a, double h, int w);
    void print();
    void setName(string newname);
    void setAge(int a);
    void setWeight(int w);
    void setHeight(double h);
    string getName() const ;
    int getAge() const ;
    double getHeight() const ;
    int getWeight() const ;
    string weightStatus() const;
};


#endif /* Patients_hpp */
