/*
  File:   main.cpp
  Author: Alejandro Najera
  Created on January 15, 2014
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//global Constants
const unsigned char CNV_PERC=100;
//function prototypes
/*
 * 
 */
//execution begins here!
int main(int argc, char** argv) {
    //declare variables
    float retSave=0, salary, yrDep, iRate;
    //input some values
    cout<<"what salary do you make $'s"<<endl;
    cin>>salary;
    cout<<"what percentage of your salary would "
            << "you put into your retirement? %"<<endl;
    cin>>yrDep;
    yrDep*=(salary/CNV_PERC);
    cout<<"What municipal bond rate will you use %"<<endl;
    cin>>iRate;
    iRate/=CNV_PERC;
    //Heading
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<endl;
    cout<<"Income during retirement>= $"<<salary<<endl;
    cout<<"Muni Bond Rate = "<<iRate<<endl;
    cout<<"Yearly deposit = $"<<yrDep<<endl;
    cout<<"Required Saving to Retire = $"<<salary/iRate<<endl;
    cout<<"Your retirement Savings"<<endl;
    //loop and print as you go to watch the saving grow
    int year=0;
    do{
        retSave*=(1+iRate);
        retSave+=yrDep;
        year++;
        cout<<setw(4)<<year;
        cout<<setw(15)<<retSave<<endl;
    }while (retSave<salary/iRate);
    //exit stage right
    
            
    

    return 0;
}

