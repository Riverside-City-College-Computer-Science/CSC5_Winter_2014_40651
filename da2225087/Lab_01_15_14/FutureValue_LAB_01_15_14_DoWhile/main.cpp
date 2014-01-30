/* 
 * File:   main.cpp
 * Author: Drew Allensworth
 *
 * Created on January 15, 2014, 7:14 PM
 * Purpose: calculate future value using a do while loop
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants
const short CNV_PERC = 100;
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float presVal, futVal, iRate;
    short nPeriods;
    
    //prompt for input
    cout << "What is your present value in $'s?" <<endl;
    cin >> presVal;
    cout << "What is your inf/inv/roi %" <<endl;
    cin >> iRate;
    iRate /= CNV_PERC;
    cout << "How many compounding periods? (yrs)" <<endl;
    cin >> nPeriods;
    
    //Set Heading
    cout <<"Year  Future Value" <<endl;
    
    //Set formatting
    cout << setprecision(2) << fixed << showpoint;
    
    //loop to determine future value
    //print every year
    futVal = presVal; //At time = 0
    int year=1;
    do{
        futVal *= (1 + iRate);
        cout << setw(4) <<year;
        cout << setw(11) << futVal <<endl;
        year++;
    }while(year <= nPeriods);
    
    //exit stage right
    return 0;
}


