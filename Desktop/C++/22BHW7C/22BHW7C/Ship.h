//
//  Ship.hpp
//  22BHW7C
//
//  Created by Albert Liu on 12/4/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#ifndef Ship_hpp
#define Ship_hpp

#include <string>

using namespace std;

class Ship
{
private:
    string name;
    string year;
public:
    Ship()
    {
        name = "....";
        year = "0000"; 
    }
    
    Ship(string n, string y)
    {
        name = n;
        year = y;
    }
    
    // Getters and Setters
    string getname() const
    {
        return name;
    }
    
    string getyear() const
    {
        return year;
    }
    
    void setname(string na)
    {
        name = na;
    }
    
    void setyear(string y)
    {
        year = y;
    }
    
    virtual void print(); 
};
#endif /* Ship_hpp */
