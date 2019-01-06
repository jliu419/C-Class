//
//  CargoShip.hpp
//  22BHW7C
//
//  Created by Albert Liu on 12/4/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#ifndef CargoShip_hpp
#define CargoShip_hpp

#include <stdio.h>
#include <string>
#include "Ship.h"

using namespace std;

class CargoShip : public Ship
{
private:
    int maxstorage;
public:
    CargoShip(int max, string name, string year) : Ship(name, year)
    {
        maxstorage = max;
    }
    
    int getmax()
    {
        return maxstorage;
    }
    
    void setmax(int max)
    {
        maxstorage = max;
    }
    
    virtual void print();
};


#endif /* CargoShip_hpp */
