/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 27, 2014, 7:50 PM
 * Purpose: Choose the student ID which wins the lottery
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
//Global Constants

//Function Prototypes
int random(int);
int winner(int [],int);
int read(char [],int[]);
void write(int [],int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables and initialize
    char fName[]="./StudentIDs.dat";
    const int SIZE=35;
    int sIds[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    //read in the data
    int actSize=read(fName,sIds);
    //Print the data in the file
    write(sIds, actSize);
    //choose the winner
    cout<<endl;
    cout<<"The winner is ->"<<winner(sIds,actSize)<<endl;
    //exit stage right
    return 0;
}

int winner(int sId[],int n){
    return sId[random(n)];
}

void write(int sId[],int size){
    cout<<endl;
    cout<<"The contents of the file is"<<endl;
    for(int name=0;name<size;name++){
        cout<<name<<"->"<<sId[name]<<endl;
    }
}

int read(char fName[],int sId[]){
    //Declare Variables
    int cnt=0;
    ifstream input;
    //open the file
    cout<<fName<<endl;
    input.open(fName);
    //read the data
    while(input){
        input>>sId[cnt++];
    }
    //close the file
    input.close();
    //exit
    return --cnt;
}

int random(int n){
    return rand()%n;
}

