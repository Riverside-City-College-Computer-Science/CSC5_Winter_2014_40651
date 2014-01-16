/* 
 * File:   main.cpp
 * Author: Drew Allensworth
 *
 * Created on January 15, 2014, 9:20 PM
 * Purpose: Calculate e to the x
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function prototypes

//execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float ex=1,x,term=1,tol=1.0e-6;
    
    //Input the power of e
    cout <<"Input x found in e^x " <<endl;
    cin >>x;
    
    //loop and stop when tolerance reached
    for(int i=1; term > tol; i++){
        term *= x/i;
        ex += term;
    }
    //compare results
    cout <<"Exact result of e(" <<x <<")= " <<exp(x) <<endl;
    cout <<"Approximate results of e(" <<x <<") = " <<ex <<endl;
return 0;
}
