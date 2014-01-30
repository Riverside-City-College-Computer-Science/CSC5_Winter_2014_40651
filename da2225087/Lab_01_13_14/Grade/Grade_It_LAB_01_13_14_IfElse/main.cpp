/* 
 * File:   main.cpp
 * Author: Drew Allensworth
 *
 * Created on January 13, 2014, 8:51 PM
 * Purpose: Grade It w/ If Else
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main() {
    //Declare Variables
    short score;
    char grade;
    //Input the score
    cout<<"What is your test/project/homework score?"<<endl;
    cin>>score;
    //process the grade
    if(score>=90)       grade='A';
    else if(score>=80)   grade='B';
    else if(score>=70)   grade='C';
    else if(score>=60)   grade='D';
    else                grade='F';
    //Output the grade
    cout<<"Your grade is " <<grade <<endl;
    
    //Exit stage right
    return 0;
}

