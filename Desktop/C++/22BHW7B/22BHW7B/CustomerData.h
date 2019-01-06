//
//  CustomerData.hpp
//  22BHW7B
//
//  Created by Albert Liu on 12/4/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#ifndef CustomerData_hpp
#define CustomerData_hpp

#include <iostream>
#include "PersonData.h"

class CustomerData : public PersonData
{
private:
    int customenumber;
    bool mailinglist;
public:
    CustomerData() : PersonData()
    {
        customenumber = 0;
        mailinglist = false; 
    }
    
    CustomerData(int iden, bool allow, string lname, string fname, string add, string citi, string s, string z, string p); 

    void print(); 
};

#endif /* CustomerData_hpp */
