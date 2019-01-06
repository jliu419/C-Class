//
//  CruiseShip.hpp
//  22BHW7C
//
//  Created by Albert Liu on 12/4/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#ifndef CruiseShip_hpp
#define CruiseShip_hpp

#include <string>
#include "Ship.h"

using namespace std;

class CruiseShip : public Ship
{
private:
    int maxpass;
public:
    CruiseShip(int max, string name, string year) : Ship(name, year)
    {
        maxpass = max;
    }

    int getmax()
    {
        return maxpass;
    }
    
    void setmax(int max)
    {
        maxpass = max;
    }
    
    virtual void print(); 
};

#endif /* CruiseShip_hpp */
