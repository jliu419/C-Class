//
//  PersonData.hpp
//  22BHW7B
//
//  Created by Albert Liu on 12/4/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#ifndef PersonData_hpp
#define PersonData_hpp

#include <string>

using namespace std;

class PersonData
{
private:
    string lastname, firstname, address, city, state, zip, phone;
public:
    PersonData()
    {
        
    }
    
    PersonData(string lname, string fname, string add, string citi, string s, string z, string p);
    
    // GETTER AND SETTERS :(
    string getFirstname()
    {
        return firstname;
    }
    
    void setFirstname(string fname)
    {
        fname = firstname;
    }
    
    string getLastname()
    {
        return lastname;
    }
    
    void setLastname(string lname)
    {
        lname = lastname;
    }
    
    string getAdd()
    {
        return address;
    }
    
    void setAdd(string add)
    {
        address = add;
    }
    
    string getcity()
    {
        return city; 
    }
    
    void setcity(string citi)
    {
        city = citi;
    }

    string getstate()
    {
        return state;
    }
    
    void setstate(string s)
    {
        state = s;
    }
    
    string getzip()
    {
        return zip;
    }
    
    void setzip(string z)
    {
        zip = z;
    }
    
    string getphone()
    {
        return phone;
    }
    
    void setphone(string p)
    {
        phone = p;
    }
    
    void print(); 
};

#endif /* PersonData_hpp */
