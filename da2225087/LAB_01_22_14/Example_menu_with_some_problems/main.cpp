/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 13, 2014, 8:51 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare our variables
    short choice;
    //Input the score
    cout<<"Menu, type the number for corresponding problem" <<cout endl;
    cout<<"1.    Problem 1"<<endl;
    cout<<"1.    Problem 2"<<endl;
    cout<<"1.    Problem 3"<<endl;
    cout<<"1.    Problem 4"<<endl;
    cout<<"1.    Problem 5"<<endl;
    cin>>choice;
    //execute problem according to the choice
    switch(choice){
        case 5:{
            //declare variables
            short x, y, result;
                //prompt the user
                cout"Add two numbers" <<endl;
                cout"Type two numbers x y";
                        
                break;
        }
        case 4:  ;break;
        case 3:  ;break;
        case 2:  ;break;
        case 1:  ;break;
        default: ;
    }
    //Output the grade
    cout<<"Your grade is a "<<grade<<endl;
    //Exit stage right
    return 0;
}
