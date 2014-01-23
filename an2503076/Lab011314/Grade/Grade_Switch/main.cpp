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
    short val=score/10-5;
    switch(val){
        case 4: grade='A';break;
        case 3: grade='B';break;
        case 2: grade='C';break;
        case 1: grade='D';break;
        default: grade='F';
    }
 
    //output the score
    cout<<"Your grade is a "<<grade<<endl;
    //exit stage right
    
    return 0;
}

