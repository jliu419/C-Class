//
//  main.cpp
//  22BHW7C
//
//  Created by Albert Liu on 12/4/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#include <iostream>
#include <string>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"

using namespace std;

int main() {

    Ship *slist[3] = {new Ship("Johnny", "1992"), new CargoShip(120, "beat", "1999"), new CruiseShip(150, "Bull", "2099")};
    
    for (int i = 0; i < 3; i ++)
    {
        slist[i]->print();
    }
    
    return 0;
}

/*
Ship name: Johnny year 1992
Ship name: beat Number of Cargo: 120
Ship name: Bull maximum passenger: 150
Program ended with exit code: 0
 */
