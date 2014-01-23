/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 *
 * Created on January 13, 2014, 8:52 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare our variable
    short score;
    char grade;
    //Input the score
    cout<<"What is your test/project/homework score?"<<endl;
    cin>>score;
    //Process the grade
    if(score>=90)          grade='A';
    if(score>=80&&score<90)grade='B';
    if(score>=70&&score<80)grade='C';
    if(score>=60&&score<70)grade='D';
    if(score<60)           grade='F';
    //output the grade
    cout<<"Your grade is a/an "<<grade<<endl;
    //exit stage right
    return 0;
}

