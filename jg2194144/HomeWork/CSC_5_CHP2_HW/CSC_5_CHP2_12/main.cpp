/* 
 * 
 * File:   Chapter 2 Problem 12
 * Author: Julian Gonzalez
 * Program: Land Calculation
 * Created on January 8, 2014, 3:34 PM
 */

#include <iostream>

using namespace std;

int main() {
    float acres, land;
    //presenting the question
    cout << "You bought a tract of land\n";
    cout << "that has 389,767 feet\n";
    //calculate total acres
    acres = 43560;
    land = 389767;
    acres = land / acres; 
    //showing the amount of acres bought
    cout << "You bought " << acres << " acres\n";
    return 0;
}

