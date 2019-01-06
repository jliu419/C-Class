//
//  Month.cpp
//  22BHW7A
//
//  Created by Albert Liu on 12/4/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#include "Month.h"
#include <string>
#include <iostream>



using namespace std;

Month::Month(int num, string monthname)
{
    monthnum = num;
    name = monthname;
}

Month::Month(int num)
{
    monthnum = num;
    name = " ";
}

Month::Month()
{
    monthnum = 1;
    name = " ";
}

// this is a private function that will refer the num to the right month in string. 
string Month::getmonths(const int num)
{
    string months[12] = {"January", "Febuary", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};
    
    
    return months[num - 1];
}

// postfix decremental function
Month Month::operator--(int)
{
    Month m = {monthnum, name};
    if (monthnum > 1)
    {
        monthnum --;
    }
    else
    {
        monthnum = 12;
    }
    setname(getmonths(monthnum));

    return m;
}

// prefix decremental function
Month Month::operator--()
{
    if (monthnum > 1)
    {
        --monthnum;
    }
    else
    {
        monthnum = 12;
    }
    setname(getmonths(monthnum));
    
    return *this;
}

// postfix decremental function
Month Month::operator++(int)
{
    Month m = {monthnum, name};
    if (monthnum < 12)
    {
        monthnum ++;
    }
    else
    {
        monthnum = 1;
    }
    setname(getmonths(monthnum));
    
    return m;
}


// prefix decremental function
Month Month::operator++()
{
    if (monthnum < 12)
    {
        ++monthnum;
    }
    else
    {
        monthnum = 1;
    }
    setname(getmonths(monthnum));
    
    return *this;
}

// ostream function
ostream &operator<<(ostream &ostr, const Month &m)
{
    ostr << "Month Name: " << m.getname() << "\n Month Number: " << m.getmonth() << endl;
    
    return ostr;
}

