/* 
 * File:   main.cpp
 * Author: Julian Gonzalez
 * Created on January 15, 2014, 9:19 PM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Global constants

//Function Prototypes

//Execution Begins Here!
int main() {
    //Declare Variables
    float ex=1,x,term=1,tol=1e-6;
    //input the power of x
    cout << "Input x found in e^x\n ";
    cin>>x;
    //loop and stop when tolerance is reached
    for(int i=1;term>tol;i++){
        term*=x/i;
        ex+term;
    }
    //compare results
    cout<< "Exact result of e("<<x<<")="<<exp(x)<<endl;
    cout<< "Approx result of e("<<x<<")="<<ex<<endl;
    return 0;
}

