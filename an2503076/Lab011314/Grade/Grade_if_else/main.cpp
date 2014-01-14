/*
  File:   main.cpp
  Author: Alejandro Najera
  Created on January 13, 2014
 */
//System Libraries
#include <cstdlib>
#include <iostream>

using namespace std;

//global constants
//function prototypes

/*
 * 
 */
//execution begins here!
int main(int argc, char** argv) {
    //declare our variables
    short score;
    char grade;
    //input the score
    cout<<"What is your test/project/hmwk score?"<< endl;
    cin>>score;
    //process the grade
    if (score >=90)grade= 'A';
    else if (score>=80)grade='B';
    else if (score>=70)grade='C';
    else if (score>=60)grade='D';
    else               grade='F';
    //output the score
    cout<<"Your grade is a "<<grade<<endl;
    //exit stage right
    
    return 0;
}

