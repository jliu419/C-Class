//
//  main.cpp
//  22BHW7A
//
//  Created by Albert Liu on 12/3/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//

#include <iostream>
#include "Month.h"

using namespace std;


int main() {
    Month m1(4, "April");
    cout << m1;
    cout << "post increment" << endl;
    cout << m1 ++;
    cout << "post Decrement" << endl;
    cout << m1 --;
    cout << "pre Decrement" << endl;
    cout << --m1;
    cout << "pre increment" << endl;
    cout << ++m1;
    
    return 0;
}

/******
 Month Name: April
 Month Number: 4
 post increment
 Month Name: April
 Month Number: 4
 post Decrement
 Month Name: May
 Month Number: 5
 pre Decrement
 Month Name: March
 Month Number: 3
 pre increment
 Month Name: April
 Month Number: 4
 Program ended with exit code: 0
 */ 
