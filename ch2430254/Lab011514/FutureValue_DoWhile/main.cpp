/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 15, 2014, 7:15 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const short CNV_PERC=100;
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float presVal, fchrVal, iRate;
    short nPeriods;
    //Prompt for inputs
    cout<<"What is your present value $'s"<<endl;
    cin>>presVal;
    cout<<"What is your inf/inv/roi %"<<endl;
    cin>>iRate;
    iRate/=CNV_PERC;
    cout<<"How many compounding periods? (yrs)"<<endl;
    cin>>nPeriods;
    //setup the heading
    cout<<"Years  Future Value"<<endl;
    cout<<setprecision(2)<<fixed<<showpoint;
   
    //Loop to determine the future value
    //Print every year
    fchrVal=presVal;//At time = 0
    int year=1;
    do{
        fchrVal*=(1+iRate);
        cout<<setw(4)<<year;
        cout<<setw(11)<<fchrVal<<endl;
        year++; 
    }while(year<=nPeriods);
    //Exit stage right
    return 0;
}

