/* 
 * File:   main.cpp
 * Author: Bernabe Villalobos
 * Created on January 15, 2014, 8:34 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const unsigned char CNV_PERC=100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float retSave=0,salary,yrDep,iRate;
    //Input some Values
    cout<<"What salary do you make $"<<endl;
    cin>>salary;
    cout<<"What percentage of our salary would "
        <<"you put into Retirement? %"<<endl;
    cin>>yrDep;
    yrDep*=(salary/CNV_PERC);
    cout<<"What muni bond rate will you use %"<<endl;
    cin>>iRate;
    iRate/=CNV_PERC;
    //Heading
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<endl;
    cout<<"Income in retirement >= &"<<salary<<endl;
    cout<<"Muni Bond rate = "<<iRate<<endl;
    cout<<"Yearly Deposit = $"<<yrDep<<endl;
    cout<<"Required Savings to Retire = $"<<(salary-yrDep)/iRate<<endl;
    cout<<"Year Retirement Savings"<<endl;
    //Loop and pint and you go to watch the savings grow
    int year=0;
    do{
        retSave*=(1+iRate);
        retSave+=yrDep;
        year++;
        cout<<setw(4)<<year;
        cout<<setw(15)<<retSave<<endl;
    }while(retSave<(salary-yrDep)/iRate);
    //Exit Stage Right
    return 0;
}

