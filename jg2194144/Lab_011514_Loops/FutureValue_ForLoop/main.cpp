/* 
 * File:   main.cpp
 * Author: Julian Gonzalez
 * 
 *
 * Created on January 15, 2014, 7:14 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const short CNV_PERCN=100;
//Function Prototypes

//Execution Begins Here!
int main() {
    //Declare Variables
    float presVal, fchrVal, iRate;
    short nPeriods;
    //Prompt for inputs
    cout << "What is your present value $'s\n";
    cin>> presVal;
    cout << "What is your inf/inv/roi %?\n";
    cin>> iRate;
    iRate/=CNV_PERCN;
    cout << "How many compounding periods? (years)\n";
    cin>> nPeriods;
    //setup the heading
    cout << "Year Future Value\n";
    cout << setprecision(2)<<fixed<<showpoint;
    //Loop to determine the future value
    //print every year
    fchrVal=presVal; //at time =0
    for (int year=1;year<=nPeriods;year++){ //this has the intilz/stop/step all in one
        fchrVal*=(1+iRate);
        cout << setw(4)<< year;
        cout << setw(11)<<fchrVal<<endl;
    }

    return 0;
}

