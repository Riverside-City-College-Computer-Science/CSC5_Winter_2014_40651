/* 
 * File:   Stock_Ticker
 * Author: Alejandro Najera
 *
 * Created on January 22, 2014, 7:57 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>


using namespace std;

//Global Constants
//Function Protoypes

void read(int &,int &,int &);
float cnvrt(int,int,int);
//execution begins here
int main(int argc, char** argv) {
    int whole, num, den;
    float result;
    read(whole,num,den);
    result=cnvrt(whole, num, den);
    cout<<setprecision(3)<<fixed<<showpoint;
    cout<<"$"<<result<<endl;
    
    
    return 0;
}
float cnvrt(int whole, int num, int den){
    return whole+1.0f*num/den;
}
void read(int &whole,int &num,int &den){
    //declare the / symbol
    char slash;
    //Prompt for inputs
    cout<<"Input stock price as xxx x/x"<<endl;
    cin>>whole>>setw(2)>>num>>slash>>den;
    
                                        }