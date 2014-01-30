/* 
 * File:  Chapter 2 Problem 4
 * Author: Julian Gonzalez
 * Program:  Restaurant Bill
 *
 * Created on January 8, 2014, 1:47 PM
 */

#include <iostream>

using namespace std;


int main() {
    float meal, tax, tip, tax_bill, tip_owed;
    //starting the question
    cout << "The bill for the night is " << '$' << "44.50" << endl;
    cout << "After Tax" << endl;
    //calculating the bill with tax
    tax = .0675;
    meal = 44.50;
    tax_bill = meal * .0675;
    //dollar amount added to bill
    meal = tax_bill + meal;
    //showing meal amount
    cout << "Your bill is $" << meal <<endl;
    
    //calculating tip
    tip = .15;
    tip_owed = tip * meal;
    //showing how much you should tip
    cout << "The amount you should tip is $";
    cout << tip_owed <<endl;       
    //showing how much money you spent
    meal = meal + tip_owed;
    cout << "The total you spent for tonight\n";
    cout << "is $" << meal;

    return 0;
}

