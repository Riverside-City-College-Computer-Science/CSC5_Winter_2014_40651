/* 
 * File:   main.cpp
 * Author: Drew Allensworth
 *
 * Created on January 22, 2014, 7:58 PM
 * Purpose: to input a number in the form ### #/#
 *      and output it in the form XXX.XX
 */

#include <iostream>
#include <iomanip>

using namespace std;

//Global constants

//Function Prototypes
void read(int &, int &, int &);
float cnvrt(int, int, int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare the input and output
    int whole, num, den;
    float result;
    //read the date
    read(whole,num,den);
    //convert
    result=cnvrt(whole,num,den);
    //set formatting
    cout <<setprecision(2) <<fixed <<showpoint;
    //output results
    cout <<"$" <<result <<endl;
    //Exit stage right
    return 0;
}

float cnvrt(int whole, int num, int den){
    return whole+1.0f*num/den;
}
void read(int &whole, int &num, int &den){
    //declare the "/"
    char slash;
    //Prompt for inputs
    cout <<"Input stock price as XXX X/X" <<endl;
    cin>>whole>>setw(2)>>num>>slash>>den;
}
