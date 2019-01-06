//
//  CargoShip.cpp
//  22BHW7C
//
//  Created by Albert Liu on 12/4/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#include "CargoShip.h"
#include "Ship.h"
#include <iostream>


// print out the name of the ship, and the maximum number of stuff it can carry
void CargoShip::print()
{
    cout << "Ship name: " << getname()
    << " Number of Cargo: " << getmax() << endl;
}




