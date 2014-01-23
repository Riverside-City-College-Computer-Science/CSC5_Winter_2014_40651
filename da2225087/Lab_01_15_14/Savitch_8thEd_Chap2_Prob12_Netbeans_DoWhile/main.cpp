/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 13, 2014, 11:07 AM
 * Calculating the square root
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float x,r,nGuess, oGuess;
    //Input the value to find the sq root of
    cout<<"What number do you wish to find the "
        <<"Square Root of ?"<<endl;
    cin>>x;
    //First approximation
    nGuess = oGuess = x/2;
    unsigned int Count = 0;
    do {
        oGuess = nGuess;
        r=x/oGuess;
        nGuess=(oGuess+r)/2;
        Count++;
    }while (nGuess - oGuess);//once it hits zero it drops out
    //Output the first approximation
    cout<<"The Approximation = "<<nGuess<<endl;
    cout << "It took " << Count <<" iterations to find the answer." <<endl;
    //Output the actual answer
    cout<<"Exact answer = "<<sqrt(x)<<endl;
    //Exit Stage Right
    return 0;
}
