/* 
 * File:   main.cpp
 * Author: Drew Allensworth
 *
 * Created on January 29, 2014, 7:57 PM
 * Purpose: To find a specific value in a list of randomly generated values
 *      and print out the position of the value in the list, terminating
 *      when the entire list has been run through.  
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;
//Global Constants

//Function prototypes
void filAray(int [], int);
void prntAry(int [], int, int);
void prntVec(const vector<int>&, int);
int find(const int [], int, int, int);
void find(const int [], int, int, vector<int> &);

//execution begins here
int main(int argc, char** argv) {
    //declare and set up problem
    const int SIZE=100;
    int array[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    //initialize the array
    filAray(array, SIZE);
    //print the array
    prntAry(array,SIZE,10);
    //initialize variables for the value to find and the starting position
    //of the search
    int val=20, pos=-1;
    //create a vector
    vector<int> posVec;
    //find the value in the array and print
    do{
        pos=find(array, SIZE, val, pos+1);
//        posVec.push_back(pos);
        cout<<"Value found at " <<pos<<endl;
    }while(pos>0);
    //print the vector
//    for(int i=0;i<posVec.size();i++){
//        cout<<"Value found at " <<posVec[i]<<endl;
//    }
    //fill the vector
    find(array, SIZE, val, posVec);
    //print the vector
    prntVec(posVec,10);
    
    //exit stage right

    return 0;
}
void prntVec(const vector<int>&vec, int perLine){
    cout<<endl;
    cout<<"Position Vector where found= (";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<")";
}

void find(const int a[], int n, int val, vector<int> &vec){
    for(int i=0;i<n;i++){
        if(a[i]==val)vec.push_back(i);//return the position of the value
    }
}
//fill array with two digit numbers 
void filAray(int a[], int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}

//Print the array with per line elements on a line
void prntAry(int a[], int n, int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
}

int find(const int a[], int n, int val, int pStart){
    for(int i=pStart;i<n;i++){
        if(a[i]==val)return i;//return the position of the value
    }//else
    return -1;//essentially a flag value stating end of list was reached
              //without finding the value
}