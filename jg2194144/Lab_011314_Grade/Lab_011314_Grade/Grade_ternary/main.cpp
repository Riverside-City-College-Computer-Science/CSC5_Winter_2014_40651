/* 
 * File:   main.cpp
 * Author: Julian Gonzalez
 * Program: if else
 * Created on January 13, 2014, 8:51 PM
 */

//system Libraries
#include <iostream>

using namespace std;
//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare our variables
    short score;
    char grade;
    //input the score
    cout << "What is your test/project/homework score?\n";
    cin >> score;
    //process the grade
    
    grade=(score >=90)?'A':     //if this is false then do the next line..cnt!
          (score >=80)?'B':
          (score >=70)?'C':
          (score >=60)?'D':
                       'F';
   
    //output the score
    cout <<"You're grade is " <<grade<< endl;
    return 0;
}


