/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 22, 2014, 7:57 PM
 * lab 40651 - stock ticker
 */

//system libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//global constants

//function prototypes
void read (int &, int &, int &);
float cnvrt (int, int, int);

int main(int argc, char** argv) {
    //declare the inputs and outputs
    int whole, num, den;
    float result;
    //read the data
    read (whole, num, den);
    //convert
    result=cnvrt(whole, num, den);
    //format the output
    cout<<setprecision(3)<<fixed<<showpoint;
    cout<<"$"<<result<<endl;
    return 0;
}

float cnvrt (int whole, int num, int den){
    return whole+1.0f*num/den;
}

void read (int &whole, int &num, int &den){
    //declare the / symbol
    char slash;
    //prompt for inputs
    cout<<"Input stock price as xxx x/x"<<endl;
    cin>>whole>>setw(2)>>num>>slash>>den;
}