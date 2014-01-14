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
int main() {
    //Declare our variables
    short score;
    char grade;
    //input the score
    cout << "What is your test/project/homework score?\n";
    cin >> score;
    //process the grade
    if(score >=90)           grade= 'A';
    if(score >=80&&score<90) grade= 'B';
    if(score >=70&&score<80) grade= 'C';
    if(score >=60&&<70)      grade= 'D';
    if(score <60)            grade= 'F';
    //output the score
    cout <<"You're grade is " <<grade<< endl;
    //exit stage right
    return 0;
}


