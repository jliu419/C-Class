//
//  main.cpp
//  22BHW5B
//
//  Created by Albert Liu on 11/6/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#include <iostream>
#include "Patient.h"

using namespace std;

int main() {
    
    Patient patJane("Jane North", 25, 66.0,120);
    Patient patTim("Tim South", 64, 72.0, 251);
    Patient patLinda("Linda East", 52, 69.0, 175);
    
    patJane.print();
    patTim.print();
    patLinda.print();
    
    return 0;
}

/**************
 OUTPUT: 
 
 Patient name: Jane North Age: 25
 Height: 66 Weight: 120
 Weight Status: Normal
 
 
 
 Patient name: Tim South Age: 64
 Height: 72 Weight: 251
 Weight Status: Obese
 
 
 
 Patient name: Linda East Age: 52
 Height: 69 Weight: 175
 Weight Status: Overweight
 
 
 
 Program ended with exit code: 0
 */
