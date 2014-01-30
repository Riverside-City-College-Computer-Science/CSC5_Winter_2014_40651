/* 
 * File:   main.cpp
 * Author: Drew Allensworth
 *
 * Created on January 13, 2014, 8:51 PM
 * Purpose: Grade It w/ If 
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
    if(score>=80&&score<90)     grade='B';
    if(score>=70&&score<80)     grade='C';
    if(score>=60&&score<70)     grade='D';
    if(score<60)                grade='F';
    //Output the grade
    cout<<"Your grade is " <<grade <<endl;
    
    //Exit stage right
    return 0;
}
