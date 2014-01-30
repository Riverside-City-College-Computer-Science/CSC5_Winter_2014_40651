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
    short val=score/10-5;
    switch(val){
        case 5:  grade='A';break;
        case 4:  grade='A';break;
        case 3:  grade='B';break;
        case 2:  grade='C';break;
        case 1:  grade='D';break;
        default: grade='F';
    }
    //output the grade
    cout<<"Your grade is a/an "<<grade<<endl;
    //exit stage right
    return 0;
}

