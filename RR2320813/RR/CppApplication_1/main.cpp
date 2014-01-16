/*
* File: main.cpp
* Author: Ramon Rodriguez
*/

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    string name;
    string city;
    string age;
    //Input information
    cout<<"Enter your name, age and city of birth."<<endl;
    cin>>name>>age>>city;
    //Output statement
    cout<<"There once was a person named "<<name
    <<" Who lived in the city of "<<city<<endl;
    cout<<"The person moved there when they were "<<age<<endl;
    //Exit stage right
    return 0;
}