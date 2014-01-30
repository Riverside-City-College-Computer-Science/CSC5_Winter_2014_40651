/* 
 * File:   main.cpp
 * Author: Julian Gonzalez
 * Program: Test Score Average
 * Created on January 13, 2014, 3:53 PM
 */

#include <iostream>

using namespace std;

int main() {
    //Setting variables for test
    int ntest, t1,t2,t3,t4,avg;
    
    ntest = 4;
    cout<< "Enter Test #1 Score\n";
    cin >> t1;
    cout << "Enter Test #2 Score\n";
    cin >> t2;
    cout << "Enter Test #3 Score\n";
    cin >> t3;
    cout << "Enter Test #4 Score\n";
    cin >> t4;
    //Calculating the Average
    avg = (t1+t2+t3+t4)/ ntest;
    //Display avg score
    cout << "You're Average Test Score is " << avg <<endl;
           

    return 0;
}

