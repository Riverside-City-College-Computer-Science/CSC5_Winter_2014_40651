/* 
 * File:   Bitcoin_Lottery
 * Author: Alejandro Najera
 *
 * Created on January 27, 2014, 7:55 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;
//no global constants
//function protypes
int random(int);
int winner(int [],int);
int read(char [],int []);
void write(int [],int);


int main(int argc, char** argv) {
    char fName[]="./StudentIDs.dat";
    const int SIZE=35;
    int sIds[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    int actSize=read(fName,sIds);
    write(sIds,actSize);
    cout<<endl<<"the winner is ->"<<winner(sIds,actSize)<<endl;
    return 0;
}
int winner(int sId[],int n){
    return sId[random(n)];
}
void write(int sId[],int size){
    cout<<endl;
    cout<<"the contents of the file"<<endl;
    for(int name=0;name<size;name++){
        cout<<name<<"->"<<sId[name]<<endl;
    }
}
int read(char fName[],int sId[]){
    int cnt=0;
    ifstream input;
    input.open(fName);
    while(!input){
        input>>sId[cnt++];
    }
    input.close();
    return --cnt;
}

int random(int n){
    return rand() %n;
}