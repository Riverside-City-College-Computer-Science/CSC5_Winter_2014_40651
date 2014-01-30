/* 
 * File:   main.cpp
 * Author: Drew Allensworth
 *
 * Created on January 22, 2014, 8:27 PM
 * Purpose: To model the game Rock, Paper, Scissors
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Global Constants

//Function Prototypes
char choose();
char eval(char, char);
void tally(char, unsigned short &, unsigned short &,unsigned short&);

int main(int argc, char** argv) {
    //Set the random number see srand()
    srand(static_cast<unsigned int>(time(0)));
    //Declare our variables
    char player1, player2, winner;
    unsigned short winPly1=0, winPly2=0,nGames=100,ties=0;
    //loop for the number of games
    for(int game=1;game<=nGames;game++){
        //Let player choose
        player2=choose();
        player1=choose();
        //evaluate the winner
        winner=eval(player1,player2);
        //Tally the results
        tally(winner,winPly1,winPly2,ties);
    }
    //output results
    cout<<"Player 1 won "<<winPly1<<" games"<<endl;
    cout<<"Player 2 won "<<winPly2<<" games"<<endl;
    cout<<"Players tied "<<ties<<" games"<<endl;
    //exit stage right
    return 0;
}

char choose(){
    switch(rand()%3){
        case 0: return 'R';
        case 1: return 'P';
        case 2: return 'S';
    }
}

char eval(char p1, char p2){
    if(p1=='R'){
        if(p2=='R') return '0';
        if(p2=='S') return '1';
        return '2';
    }else if(p1=='S'){
        if(p2=='S') return '0';
        if(p2=='P') return '1';
        return '2';
    }else{
        if(p2=='P') return '0';
        if(p2=='R') return '1';
        return '2';
    }
}

void tally(char win, unsigned short &wp1, unsigned short &wp2, 
        unsigned short &ties){
    if(win=='1')wp1++;
    if(win=='2')wp2++;
    if(win=='0')ties++;
}