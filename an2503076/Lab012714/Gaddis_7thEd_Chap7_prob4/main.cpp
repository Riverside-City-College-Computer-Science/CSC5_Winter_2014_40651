/* 
 * File:   Alejandro najera
 * Author: Food for monkey
 *
 * Created on January 27, 2014, 9:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

const int COLS=7;

int read(int [][COLS]);
void write(int [][COLS],int);
int min(int [][COLS],int);
int max(int [][COLS],int);
void avg(int [][COLS],int [],int);

int main(int argc, char** argv){
    cont int ROWS=5;
    int mnkFood[ROWS][COLS];
    char fName[]=".monkey.dat";
    ibnt actSize
}

void write(int [][COLS],int ROWS){
    cout<<endl;
    for(int row=0;row<ROWS;rows++){
        for(int col=0;col<COLS;col++){
        cout<<monkey[row][col];
    }
    
}


int read(char fName[],int monkey[][COLS]){
    ifstream input;
    input.open(fName);
    int row=0;
    while(input){
    for(int col=0;col<COLS;col++){
        input>>monkey[row][col];
    }
    row++;
    input.close();
    
    return --row;
}

}