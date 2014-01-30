/* 
 * File:   main.cpp
 * Author: Ramon Rodriguez
 *
 * Created on January 15, 2014, 4:42 PM
 * Gladdis Chap 2 Problem 5
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variables
    float A, B, C, D, F, sum, ave;
    //Process
    A=28;
    B=32;
    C=37;
    D=24;
    F=33;
    sum=A+B+C+D+F;
    ave=sum/5;
    
    //Output
    cout<<"The sum is "<<sum<<endl<<
            "The Average of the values is "<<ave<<endl;
    //Exit Stage Right

    return 0;
}

