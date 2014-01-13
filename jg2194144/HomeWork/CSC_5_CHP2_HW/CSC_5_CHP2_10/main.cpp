/* 
 * File:   Chapter 2 Problem 10
 * Author: Julian Gonzalez
 * Program: Miles Per Gallon
 * Created on January 8, 2014, 3:02 PM
 */

#include <iostream>

using namespace std;


int main() {
    float mpg, gallon, miles;

    cout << " Your car holds 12 gallons of gas.\n";
    cout << " On a full tank you can drive 350 miles.\n";
    //calculate the mpg
    gallon = 12;
    miles = 350;
    mpg = miles / gallon;
    cout << " Your Miles per Gallon is " << mpg <<endl;
            
    
    return 0;
}

