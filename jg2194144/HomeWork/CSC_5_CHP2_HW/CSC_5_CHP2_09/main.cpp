/* 
 * File:   Chapter 2 Problem 9
 * Author: Julian Gonzalez
 * Program: Cyborg Data Type Sizes
 * Created on January 8, 2014, 2:38 PM
 */

#include <iostream>

using namespace std;


int main() {
    cout << "Here's my results for data types in bytes:\n";
    //sizeof(int)
    
    cout << "data size for char " << sizeof(char) <<endl;
    cout << "data size for int " << sizeof(int) <<endl;
    cout << "data size for float " << sizeof(float) <<endl;
    cout << "data size for double " << sizeof(double) <<endl;

    return 0;
}

