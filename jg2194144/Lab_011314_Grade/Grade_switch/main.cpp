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
    short val= score/10-5;
    switch(val){
        case 5: grade='A';break;
        case 4: grade='A';break;
        case 3: grade='B';break;
        case 2: grade='C';break;
        case 1: grade='D';break;
        default: grade='F';
    }
    //output the score
    cout <<"You're grade is " <<grade<< endl;
    return 0;
}
