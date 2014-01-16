/*
  File:   main.cpp
  Author: Alejandro Najera
  Created on January 15, 2014
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
const short CNV_PERC=100;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float presVal,fchrVal,iRate;
    short nPeriods;
    //Prompt for inputs
    cout<<"what is your present value $'s"<<endl;
    cin>>presVal;
    cout<<"what is your inf/inv/roi %"<<endl;
    cin>>iRate;
    iRate/=CNV_PERC;
    cout<<"How many compounding periods?(yrs)"<<endl;
    cin>>nPeriods;
    //setup the heading
    cout<<"year future value"<<endl;
    cout<<setprecision(2)<<fixed<<showpoint;
    //loop to determine the future value
    //print every year
    fchrVal=presVal;
    int year=1;
    do{
        fchrVal*=(1+iRate);
        cout<<setw(4)<<year;
        cout<<setw(11)<<fchrVal<<endl;
        year++;
    }while(year<=nPeriods);
    

    return 0;
}

