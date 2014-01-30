/*
  File:   main.cpp
  Author: Alejandro Najera
  Created on January 15, 2014
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
    float x,r,nGuess,oGuess;
    //Input the value to find the sq root of
    cout<<"What number do you wish to find the "
        <<"Square Root of ?"<<endl;
    cin>>x;
    //First approximation
    nGuess=oGuess=x/2;
    int count=0;
    do{
        oGuess=nGuess;
        r=x/oGuess;
        nGuess=(oGuess+r)/2;
        count++;
    }while(nGuess-oGuess !=0);
    //Output the first approximation
    cout<<"The Approximation = "<<nGuess<<endl;
    cout<<"It took "<<count<<" iterations for the solution"<<endl;
    //Output the actual answer
    cout<<"Exact answer = "<<sqrt(x)<<endl;
    //Exit Stage Right
    return 0;
}

