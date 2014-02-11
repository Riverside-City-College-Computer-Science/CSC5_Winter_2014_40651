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
struct DynAry{
    int *data;
    int utlSize;
};
//Function Prototype
DynAry *fillAry(int);
void prntAry(const DynAry *,int);
void reclaim(DynAry *);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables and set the random seed
    srand(static_cast<unsigned int>(time(0)));
    //Fill the structure
    DynAry *dAry=fillAry(100);
    //Print the structure
    prntAry(dAry,10);
    //Reclaim the memory allocation
    reclaim(dAry);
    //Exit Stage right

    return 0;
}

void reclaim(DynAry *a){
    //Reclaim first the array
    delete []a->data;
    //Reclaim last the structure
    delete a;
}

void prntAry(const DynAry *a,int perLine){
    //Print the array
    for(int i=0;i<a->utlSize;i++){
        cout<<setw(4)<<a->data[i];
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//Fill the array with 3 digit random numbers
DynAry *fillAry(int n){
    //Verify/Validate the utilize size of the array
    if(n<=1||n>SIZE)n=2;
    //Declare and allocate memory for the structure
    DynAry *a=new DynAry;
    a->utlSize=n;
    //Declare and allocate memory for the array
    a->data=new int[a->utlSize];
    //Fill the array with 3 digit numbers
    for(int i=0;i<a->utlSize;i++){
        //(*a).data[i]=rand()%900+100;
        //*(a)->data+i)=rand()%900+100;
        //*((*a).data+i)=rand()%900+100;
        a->data[i]=rand()%900+100;
    }
    //Return the pointer to the structure
    return a;
}


