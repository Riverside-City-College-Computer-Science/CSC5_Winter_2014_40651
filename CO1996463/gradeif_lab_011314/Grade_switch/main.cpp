/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 13, 2014, 9:17 PM
 * grade score with switch
 */

//System libraries
#include <iostream>
using namespace std;

//Global Constants

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
    short val=score/10-5;
    switch(val) {
        case 4:  grade='A';break;
        case 3:  grade='B';break;
        case 2:  grade='C';break;
        case 1:  grade='D';break;
        default: grade='F';
    }
    //Output the grade
    cout<<"Your grade is a "<<grade<<endl;
    //Exit stage right
    return 0;
}

