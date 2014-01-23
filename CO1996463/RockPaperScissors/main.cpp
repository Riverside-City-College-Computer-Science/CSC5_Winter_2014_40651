/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 22, 2014, 8:28 PM
 * lab 40651 - Rock, Paper, Scissors
 */

//system libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//global constants

//function prototypes
char player();
char eval(char, char);
void tally(char, unsigned short &, unsigned short &, unsigned short &);

int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //declare variables
    char player1, player2, winner;
    unsigned short winply1=0, winply2=0, ngames=100,ties=0;
    //loop for the number of games
    for(int game=1;game<=ngames;game++){
        //let player choose
        player1=player();
        player2=player();
        //evaluate who won
        winner=eval(player1,player2);
        //tally the results
        tally(winner,winply1,winply2,ties);
    }
    //output the results
    cout<<"Player 1 Won "<<winply1<<" games"<<endl;
    cout<<"Player 2 Won "<<winply2<<" games"<<endl;
    cout<<"number of ties is "<<ties<<" games"<<endl;
    //exit stage right
    return 0;
}

void tally(char win, unsigned short &wp1, unsigned short &wp2,unsigned short &ties){
    if(win=='1')wp1++;
    if(win=='2')wp2++;
    if(win=='0')ties++;
}

char eval(char p1, char p2){
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
    switch (rand()%3){
        case 0: return 'R';
        case 1: return 'P';
        default:return 'S';
    }
}