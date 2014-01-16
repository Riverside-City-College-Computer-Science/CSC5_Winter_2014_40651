/* 
 * File:   main.cpp
 * Author: Julian Gonzalez
 * Created on January 15, 2014, 8:35 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const unsigned char CNV_PERC=100;

//Function Prototypes

//Execution Begins Here!
int main() {
    //Declare Variables
    float retSave=0, salary, yrDep, iRate;
    //Input Values
    cout << "What salary do you make?\n";
    cin>> salary;
    cout << "What percentage of your salary would\n"
         << "you put into retirement? %\n";
    cin>> yrDep;
    yrDep*=(salary/CNV_PERC);
    cout << "What muni bond rate will you use? %\n";
    cin>>iRate;
    iRate/=CNV_PERC;
    //Heading
    cout <<setprecision(2)<<fixed<<showpoint;
    cout << "\n";
    cout << "Income in retirement >= $"<< salary<<endl;
    cout << "Muni Bond rate= "<<iRate<<endl;
    cout << "Yearly Deposit = $"<<yrDep<<endl;
    cout << "Required Savings to Retire = $"<<(salary-yrDep)/iRate;
    cout << "Year Retirement Savings\n";
    //Loop and print as you to to watch the savings grow
    int year=0;
    do{
        retSave*=(1+iRate);
        retSave+=yrDep;
        year++;
        cout<<setw(4)<<year;
        cout<<setw(15)<<retSave<<endl;
        
        
    }while(retSave<(salary-yrDep)/iRate);
    //exit stage right
    

    return 0;
}

