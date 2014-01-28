/* 
 * File:   main.cpp
 * Author: Drew Allensworth
 *
 * Created on January 27, 2014, 9:18 PM
 * Purpose: Program for Gaddis Chapter 7 Problem 4
 *      Monkey Business: Food for monkeys using 2D array
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//Global constants
const int COLS=7;

//function prototypes
int read(char[], int [][COLS]);
void write(int [][COLS], int);
int min(int [][COLS], int);
int max(int [][COLS], int);
int avg(int [][COLS], int[], int);

//execution starts here
int main(int argc, char** argv) {
    const int ROWS=5;
    int mnkFood[ROWS][COLS];
    char fName[]="./monkey.dat";
    //read the data from the file
    int actSize=read(fName,mnkFood);
    //write the data
    write(mnkFood,actSize);
    //exit stage right
    return 0;
}

int read(char fName[], int monkey[][COLS]){
    //Open the file
    ifstream input;
    input.open(fName);
    //read the data
    int row=0;
    while(input){
        for(int col=0;col<COLS;col++){
            input>>monkey[row][col];
        }
        row++;
    }
    //close file
    input.close();
    //return number of rows
    return --row;
}

void write(int monkey[][COLS], int ROWS){
    cout<<endl;
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            cout<<setw(4)<<monkey[row][col];
        }
        cout<<endl;
    }   
    cout<<endl;
}