/* 
 * File:   main.cpp
 * Author: Julian Gonzalez
 * Program: Calculating Calories
 * This program is for a bag of cookies
 * Created on January 13, 2014, 4:23 PM
 */

#include <iostream>

using namespace std;

int main() {
    //setting variables 
    int c_ate, cal;
    cout << "How many Cookies did you eat?\n";
    cin >> c_ate;
    //calculating the cal
    //knowing that 1 cookie is 30 cals
    //so x times 30 = cal
    cal = c_ate * 30;
    //display calories 
    cout << "You ate " << cal << " Calories\n";
    

    return 0;
}

