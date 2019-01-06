//
//  CustomerData.cpp
//  22BHW7B
//
//  Created by Albert Liu on 12/4/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#include "CustomerData.h"
#include <string>
#include <iostream>


CustomerData::CustomerData(int iden, bool allow, string lname, string fname, string add, string citi, string s, string z, string p) : PersonData( lname,  fname,  add,  citi,  s,  z,  p)
{
    customenumber = iden;
    mailinglist = allow;
}

    // print out all the informations 
    void CustomerData::print()
    {
        cout << endl << endl;
        cout << "Customer First!!!!!" << endl;
        PersonData::print();
        
        cout << "customer id: " << customenumber << endl;
        if (mailinglist)
            cout << "customer wants to be in the mailing list" << endl << endl;
        else
            cout << "customer does not want to be in the mailing list" << endl << endl;
    }


