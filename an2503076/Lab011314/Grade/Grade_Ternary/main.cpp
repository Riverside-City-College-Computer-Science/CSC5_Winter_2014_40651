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
    grade=(score>=90)?'A':
          (score>=80)?'B':
          (score>=70)?'C':
          (score>=60)?'D':'F';
    
    //output the score
    cout<<"Your grade is a "<<grade<<endl;
    //exit stage right
    
    return 0;
}

