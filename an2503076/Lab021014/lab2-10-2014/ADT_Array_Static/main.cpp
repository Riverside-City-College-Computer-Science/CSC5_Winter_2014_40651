/* 
 * File:   main.cpp
 * Author: Alejandro Najera
 *
 * Created on February 10, 2014, 6:30 PM
 */
//System libraries
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
//Global Constants
const int SIZE=10000;

//ADT's not in user defined libraries
struct StatAry{
int data[SIZE];
int utlSize;
};


//Functional Prototypes
void fillAry(StatAry &,int);
void prntaAry(const StatAry &, int);

//Execution Begins here!

/*
 * 
 */
int main(int argc, char** argv) {
//Declare variables and set random seed
    srand(static_cast<unsigned int>(time(0)));
    StatAry sAry;
    //fill the structure
    fillAry(sAry,100);
    //print the structure
    prntaAry(sAry,10);
    
    return 0;
}
void prntaAry(const StatAry &a, int perLine){
    cout<<endl;
    for(int i=0;i<a.utlSize;i++){
        cout<<setw(4)<<a.data[i];
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(StatAry & a,int n){
    //verify validate the utilize size of array
    if(n<=1||n>SIZE)n=2;
    a.utlSize=n;
    //fill the array with 3 digit numbers
    for(int i=0;i<a.utlSize;i++){
    a.data[i]=rand()%900+100;
        
    }
}



