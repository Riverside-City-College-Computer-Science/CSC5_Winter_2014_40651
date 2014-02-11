/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on February 10, 2014, 6:29 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//Global Constants
const int SIZE=10000;

//ADT's not in user defined libraries
struct StatAry{
    int data[SIZE];
    int utlSize;
};
//Function Prototype
void fillAry(StatAry &,int);
void prntAry(const StatAry &,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables and set the random seed
    srand(static_cast<unsigned int>(time(0)));
    StatAry sAry;
    //Fill the structure
    fillAry(sAry,100);
    //Print the structure
    prntAry(sAry,10);
    //Exit Stage right

    return 0;
}

void prntAry(const StatAry &a,int perLine){
    //Print the array
    for(int i=0;i<a.utlSize;i++){
        cout<<setw(4)<<a.data[i];
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//Fill the array with 3 digit random numbers
void fillAry(StatAry &a,int n){
    //Verify/Validate the utilize size of the array
    if(n<=1||n>SIZE)n=2;
    a.utlSize=n;
    //Fill the array with 3 digit numbers
    for(int i=0;i<a.utlSize;i++){
        //*(a.data+i)=rand()%900+100;
        a.data[i]=rand()%900+100;
    }
}

