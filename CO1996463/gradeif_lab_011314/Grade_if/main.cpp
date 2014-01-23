/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 13, 2014, 9:11 PM
 * grade score with if
 */

//System Libraries
#include <iostream>
using namespace std;

//Global constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    short score;
    char grade;
    //Input the score
    cout<<"What is your test/project/hmwk score?"<<endl;
    cin>>score;
    //Process the grade
    if(score>=90)           grade='A';
    if(score>=80&&score<90) grade='B';
    if(score>=70&&score<80) grade='C';
    if(score>=60&&score<70) grade='D';
    if(score<60)            grade='F';
    //Output the grade
    cout<<"Your grade is a "<<grade<<endl;
    //Exit stage right
    return 0;
}

