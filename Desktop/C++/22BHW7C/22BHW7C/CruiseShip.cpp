//
//  CruiseShip.cpp
//  22BHW7C
//
//  Created by Albert Liu on 12/4/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#include "CruiseShip.h"
#include "Ship.h"
#include <iostream>

using namespace std;


// print out the name of the ship and the maximum number of passenger.
void CruiseShip::print ()
{
    cout << "Ship name: " << getname()
    << " maximum passenger: " << getmax() << endl;
}



