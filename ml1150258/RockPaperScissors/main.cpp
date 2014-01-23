/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 22, 2014, 8:27 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
char player();
char eval(char,char);
void tally(char,unsigned short &,unsigned short &);


int main(int argc, char** argv) {

    return 0;
}

void tally(char win,unsigned short &wp1,
        unsigned short &wp2){
    if(win=='1')wp1++;
    if(win=='2')wp2++;
}

char eval(char p1,char p2){
    if(p1=='R'){
        if(p2=='R')return '0';
        if(p2=='S')return '1';
        return '2';
    }else if(p1=='S'){
        if(p2=='S')return '0';
        if(p2=='P')return '1';
        return '2';
    }else{
        if(p2=='P')return '0';
        if(p2=='R')return '1';
        return'2';
    }
}

char player(){
    switch(rand()%3){
        case 0:  return 'R';
        case 1:  return 'P';
        default: return 'S';
    }
}

