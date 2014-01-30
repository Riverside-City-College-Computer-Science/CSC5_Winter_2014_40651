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
    grade=(score>=90)?'A':
          (score>=80)?'B':
          (score>=70)?'C':
          (score>=60)?'D':'F';
                     
    //output the grade
    cout<<"Your grade is a/an "<<grade<<endl;
    //exit stage right
    return 0;
}

