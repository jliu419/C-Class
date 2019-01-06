//
//  Month.h
//  22BHW7A
//
//  Created by Albert Liu on 12/4/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#include <string>

#ifndef Month_h
#define Month_h


using namespace std;

class Month
{
private:
    string name;
    int monthnum;
    string getmonths(const int num); 
        
public:
    
    Month();
    Month(int num); 
    Month(int num, string monthname);
    
    string getname() const
    {
        return name;
    }
    
    int getmonth() const
    {
        return monthnum;
    }
    
    void setname(string monthname)
    {
        name = monthname;
    }
    
    void setnum(int num)
    {
        monthnum = num;
    }
    
    Month operator--(int);
    Month operator--();
    Month operator++(int);
    Month operator++();
    friend ostream &operator<<(ostream &ostr, const Month &m);
};

#endif /* Month_h */
