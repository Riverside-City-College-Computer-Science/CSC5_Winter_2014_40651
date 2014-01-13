/* 
 * File:  Chapter 2 problem 2
 * Author: Julian Gonzalez
 * Program: Sales Prediction
 * 
 * Created on January 7, 2014, 9:32 PM
 */

#include <iostream>

using namespace std;


int main() {
    float total, amount_for_year, percent;
    //presenting the question
    cout << "East Coast Sales\n";
    cout << "Has brought in " << '$' << "4.6 million\n";
    cout << "This year.\n";
    //function to calculate money made
    amount_for_year = 4600000;
            percent = 0.62;
    total= amount_for_year * percent;
    //showing the total
    cout << "The Company has made " << '$' << total << endl;
    cout << "This year";
    

    return 0;
}

