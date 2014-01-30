/* 
 * File:   main.cpp
 * Author: Drew Allensworth
 *
 * Created on January 13, 2014, 8:51 PM
 * Purpose: Grade It w/ ternary operators
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
    grade=(score>=90)?'A':
        (score>=80)?'B':
        (score>=70)?'C':
        (score>=60)?'D':'F';
    //Output the grade
    cout<<"Your grade is " <<grade <<endl;
    
    //Exit stage right
    return 0;
}
