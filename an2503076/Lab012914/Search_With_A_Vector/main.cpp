/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 29, 2014, 8:02 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

//Global constants

//Function Prototypes
void filAray(int [],int);
void prntAry(int [],int,int);
int find(const int[],int,int,int);


int main(int argc, char** argv) {
//Declare and setup the problem
const int SIZE=100;
int array[SIZE];
srand (static_cast<unsigned int>(time(0)));
//Initialize the array
filAray(array,SIZE);
//Display the array
prntAry(array, SIZE,10);
//find a value
int val=20,pos=-1;
vector<int> posVec;
do{
  
    pos=find(array,SIZE,val,pos+1);
    posVec.push_back(pos);
cout<<"Value fount at "<<pos<<endl;
}while(pos>0);
//print out the vector
for(int i=0;i<posVec.size();i++){
    cout<<"value fount at "<<posVec[i]<<endl;
}
//Exit stage right
    return 0;
}

int find(const int a[],int n,int val,int pStrt){
    for(int i=pStrt;i<n;i++){
        if(a[i]==val)return i;
        
    }
    return -1;
}


//Fill the array with 2 digit numbers
void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
        
    }
    cout<<endl;
}