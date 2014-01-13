/* 
 * File:  Chapter 2 Problem 7
 * Author: Julian Gonzalez
 * Program: Ocean Levels
 * Created on January 8, 2014, 2:16 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    float ocean_const, ocean_level;
    //placing ocean const
    ocean_const = 1.5;
    cout << "todays ocean levels are rising\n";
    cout << "at a 1.5 millimeters a year\n";
    cout << "in 5 years the the level will have\n";
    //calculating in 5 years of rising
    ocean_level = 5 * 1.5;
    cout << "risen " << ocean_level << " millimeters\n";
    cout << "In 7 years the ocean level will rise\n";
    //calculating in 7 years 
    ocean_level = 7 * 1.5;
    cout << ocean_level << " millimeters\n";
    cout << "In 10 years the ocean level will rise\n";
    //calculating in 10 years
    ocean_level = 10 * 1.5;
    cout << ocean_level << " millimeters\n";
    

    return 0;
}

