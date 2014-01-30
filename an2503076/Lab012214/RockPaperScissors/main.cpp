/* 
 * File:   main.cpp
 * Author: Alejandro Najera
 *
 * Created on January 22, 2014, 8:27 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//global constants

//Function prototypes


char player();
char eval(char, char);
void tally(char,unsigned short&,unsigned short &,unsigned short &ties);


int main(int argc, char** argv) {

    srand(static_cast<unsigned int>(time(0)));
    char player1,player2,winner;
    unsigned short winPly1=0,winPly2=0,nGames=100,ties=0;
    for(int game=1;game<=nGames;game++){
        
        player1=player();
        player2=player();
        //evaluate who won
        winner=eval (player1,player2);
        //tally the results
        tally(winner,winPly1, winPly2,ties);
        
    }
    cout<<"Player 1 won "<<winPly1<<" games"<<endl;
    cout<<"Player 2 won "<<winPly2<<" games"<<endl;
    cout<<"number of tied games is "<<ties<<endl;
    
    //exit stage right
    return 0;
}

void tally(char win,unsigned short &wp1,
        unsigned short &wp2, unsigned short &ties){
    if(win=='1')wp1++;
    else if(win=='2')wp2++;
    else ties++;
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
        return '2';
          }
    
}

char player(){
    switch(rand()%3){
        case 0: return 'R';
        case 1: return 'P';
        default: return 'S'; 
    }
}