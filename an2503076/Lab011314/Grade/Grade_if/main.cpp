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
    if (score >=90)         grade='A';
    if (score>=80&&score<90)grade='B';
    if (score>=70&&score<80)grade='C';
    if (score>=60&&score<70)grade='D';
    if (score<60)           grade='F';
    //output the score
    cout<<"Your grade is a "<<grade<<endl;
    //exit stage right
    
    return 0;
}

