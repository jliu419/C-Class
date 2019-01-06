//
//  main.cpp
//  22BHW7B
//
//  Created by Albert Liu on 12/4/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
// this program demonstrates the redefinition of print method during inheritance without using virtual. 

#include <iostream>
#include "CustomerData.h"
#include "PersonData.h"

using namespace std;

int main() {
    
    CustomerData c(1234, true, "Albert", "Liu", "1109 Mary Ave. ", "Las Vegas", "Arizona", "94088", "4088880099");
    PersonData p("Gelly", "Manny", "1029 Gunn Ave. ", "San Antonio", "Texas", "18909", "6500234312");
    PersonData * data = new CustomerData(1234, true, "Albert", "Liu", "1109 Mary Ave. ", "Las Vegas", "Arizona", "94088", "4088880099");
    
    c.print();
    cout << endl;
    p.print();
    cout << endl;
    data -> print();
    cout << endl;
    
    
    return 0;
}


/*******
 
 Customer First!!!!!
 name : Liu Albert
 address: 1109 Mary Ave.  Las Vegas, Arizona 94088
 phone #: 4088880099
 customer id: 1234
 customer wants to be in the mailing list
 
 
 name : Manny Gelly
 address: 1029 Gunn Ave.  San Antonio, Texas 18909
 phone #: 6500234312
 
 name : Liu Albert
 address: 1109 Mary Ave.  Las Vegas, Arizona 94088
 phone #: 4088880099
 
 Program ended with exit code: 0
 
 
 
 */
