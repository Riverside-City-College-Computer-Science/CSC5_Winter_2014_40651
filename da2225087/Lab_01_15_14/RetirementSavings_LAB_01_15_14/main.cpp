/* 
 * File:   main.cpp
 * Author: Drew Allensworth
 *
 * Created on January 15, 2014, 8:35 PM
 * Purpose: Calculate the amount needed to retire comfortably
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const unsigned char CNV_PERC = 100;

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float retSave=0, salary, yrDep, iRate;
    
    //Input values
    cout << "What salary do you make in $'s" <<endl;
    cin >> salary;
    cout << "What percentage of your salary would "
            << "you put into retirement? %";
    cin >> yrDep;
    yrDep *= (salary/CNV_PERC);
    cout << "What municipal bond rate will you use %" <<endl;
    cin >> iRate;
    iRate /= CNV_PERC;
    
    //Heading
    cout << setprecision(2) <<fixed <<showpoint;
    cout << "Income during retirement >= " << salary <<endl;
    cout <<"Municipal bond rate = " <<iRate <<endl;
    cout << "Yearly Deposit = $" <<yrDep <<endl;
    cout << "Required savings to retire = $" <<((salary-yrDep)/iRate) <<endl;
    cout << "Year Retirement Savings" <<endl;
    //loop and print as you go to watch the savings grow
    int year = 0;
    do{
        retSave *= (1+iRate);
        retSave += yrDep;
        year++;
        cout <<setw(4) <<year;
        cout <<setw(15) <<retSave <<endl;
    }while(retSave < ((salary-yrDep)/iRate));
            
    return 0;
}

