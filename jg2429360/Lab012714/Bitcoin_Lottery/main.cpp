/* 
 * File:   main.cpp
 * Author: rcc
 * Purpose: choose the student ID which wins
 * the lottery
 * Created on January 27, 2014, 7:49 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

//No global constants

//Function Prototype
int random(int);
int winner(int [],int);
int read(char [],int[]);
void write(int [],int);


int main(int argc, char** argv) {
    //Delcare variables and initialize
    char fName[]="./StudentIDs.dat";
    const int SIZE=35;
    int sIds[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    //read in the data
    int actSize=read(fName,sIds);
    //Print the data in the file
    write(sIds,actSize);
    //choose the winner
    cout<<endl<<"the winner is ->"
            <<winner(sIds,actSize)<<endl;
   
    //exit stage right
    
    return 0;
    
}


void write(int sId[],int size){
    cout<<endl;
    cout<<"the contents of the files is"<<endl;
    for(int name=0;name<size;name++){
        cout<<name<<"->"<<sId[name]<<endl;
        
    }
    cout<<endl;
}


int read(char fName[], int sId[]){
    //Declare variables
    int cnt=0;
    ifstream input;
    //Open the file
    input.open(fName);
    //Read the data
    while(input){
        input>>sId[cnt++];
    }
    //Close the file
    input.close();
    //exit
    return cnt;
    
    
}

int random(int n){
    return rand()%n;
}