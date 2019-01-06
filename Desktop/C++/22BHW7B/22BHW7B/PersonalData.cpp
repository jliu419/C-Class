//
//  PersonalData.cpp
//  22BHW7B
//
//  Created by Albert Liu on 12/5/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#include "PersonData.h"
#include <iostream>

using namespace std;

    PersonData::PersonData(string lname, string fname, string add, string citi, string s, string z, string p)
    {
        lastname = lname;
        firstname = fname;
        address = add;
        city = citi;
        state = s;
        zip = z;
        phone = p;
    }

    // print out all these informations      
    void PersonData::print()
    {
        cout << "name : " << firstname + " " + lastname << endl;
        cout << "address: " << address + " " + city + ", " + state + " " + zip << endl;
        cout << "phone #: " << phone << endl;
    }
