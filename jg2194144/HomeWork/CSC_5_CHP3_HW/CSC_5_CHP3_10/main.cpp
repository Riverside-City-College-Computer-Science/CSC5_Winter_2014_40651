/* 
 * File:   main.cpp
 * Author: Julian Gonzalez
 * Program: Celsius to Fahrenheit
 * Created on January 13, 2014, 4:06 PM
 */

#include <iostream> 
#include <iomanip>

using namespace std;

int main() {
   //setting variables
    float f,c;
    //asking for C temp
    cout << "Enter Celcius Number\n";
    cin >> c;
    //calculating f
    f = (9 * c + 160) / 5;
    //making the numbers look nice
    cout << setprecision(2) <<fixed;
    //displaying the result
    cout << "The Temperature is " << f << "°"<< " Fahrenheit\n";
             
    return 0;
}

