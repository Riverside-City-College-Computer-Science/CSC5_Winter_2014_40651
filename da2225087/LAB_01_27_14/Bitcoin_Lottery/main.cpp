/* 
 * File:   main.cpp
 * Author: Drew Allensworth
 *
 * Created on January 27, 2014, 7:49 PM
 * Purpose: choose the student ID which wins the lottery
 */

//system libraries
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <ctime>

using namespace std;
//global constants

//function prototypes
int random(int);
int winner(int [],int);
int read(char [], int []);
void write(int [], int);

int main(int argc, char** argv) {
    //Declare variables
    char fName[]="./StudentIDs.dat";
    const int SIZE = 35;
    int sIDs[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    //Read in the data
    int actSize=read(fName,sIDs);
    //Print the data in the file
    write(sIDs,actSize);
    //Choose the Winner
    cout<<endl<<"The winner is ->"
            <<winner(sIDs,actSize)<<endl;
    //exit stage right
    return 0;
}

int winner(int sID[],int n){
    return sID[random(n)];
}

void write(int sID[], int size){
    cout<<endl;
    cout<<"The contents of the file is"<<endl;
    for(int name=0;name<size;name++){
        cout<<name<<"->"<<sID[name]<<endl;
    }
    cout<<endl;
}

int read(char fName[], int sID[]){
    //declare variables
    int cnt=0;
    ifstream input;
    //open file
    input.open(fName);
    //read in the data
    while(input){
        input>>sID[cnt++];
    }
    //close the file
    input.close();
    //exit
    return --cnt;
}

int random(int n){
    return rand()%n;
}