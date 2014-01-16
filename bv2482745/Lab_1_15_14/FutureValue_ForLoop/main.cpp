/* 
 * File:   main.cpp
 * Author: Bernabe Villalobos
 * Created on January 15, 2014, 7:14 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants
const short CNV_PERC=100;
//Function Prototypes

//Begin Execution
int main () {
    //Declare Variables
    float presVal, fchrVal, iRate;
    short nPeriods;
    //Prompt for inputs
    cout<<"What is your present value $'s"<<endl;
    cin>>presVal;
    cout<<"What is your inf/inc/roi %"<<endl;
    cin>>iRate;
    iRate/=CNV_PERC;
    cout<<"How many compounding periods? (yrs)"<<endl;
    cin>>nPeriods;
    //Setup the heading
    cout<<"Year  Future Value"<<endl;
    cout<<setprecision(2)<<fixed<<showpoint;
    //Loop to determine the future value
    //Print every year
    fchrVal=presVal;//At time = 0
    for(int year=1;year<=nPeriods;year++){
        fchrVal*=(1+iRate);
        cout<<setw(4)<<year;
        cout<<setw(11)<<fchrVal<<endl;
    }
    //Exit Stage Right
    return 0;
}

