/*
  File:   main.cpp
  Author: Alejandro Najera
  Created on January 15, 2014
 */
//system libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

/*
 * 
 */
//Execution begins here
int main(int argc, char** argv) {
    //declare variable
    float ex=1,x, term=1, tol=1e-6;
    //input the oiwer of x
    cout<<"input x found in e^x "<<endl;
    cin>>x;
    //loop anfd stop when tollerance reached
    for(int i=1;term>tol;i++){
        term*=x/i;
        ex+=term;
    }
    
    cout<<"Exact result of e("<<x<<")-"<<exp(x)<<endl;
    cout<<"Approx result of e("<<x<<")-"<<ex<<endl;
    //exit stage right

    return 0;
}

