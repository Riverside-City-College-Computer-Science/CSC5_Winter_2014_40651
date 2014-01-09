/*
  Julian Gonzalez
  CSC_5_40651
  1) Calculate the distance to a star
  2) Calculate the years it would take to travel
  3) Calculate the Escape Velocity
  4) Utilize Scientific Notation
*/

//System libraries
#include <iostream>
using namespace std;

//Global Constants
const float VC=3.0e8; //3x10^8 meters/second
const float CNV_M_KM=1e-3;//Conversion from meters to kilometers
const float CNV_FT_M=3.048e-1;//conversion from feet to meters
const float CNV_MI_FT=5.280e3;//conversion from miles to feet
const float CNV_SEC_YR=6.0e1*6.0e1*2.4e1*3.65e2;//Conversion from seconds to years

//Function Prototypes

//Execuction begins here!
int main(){
    //Declare variables
    float dLtYrs,dMiles,dKm,tyears, escape_v;

    //Input the distance to a star in lightyears
    cout<<"How far away is star in lightyears?"<<endl;
    cin>>dLtYrs;

    //Process - Calculate in miles and kilometers
    dKm=VC*CNV_SEC_YR*dLtYrs*CNV_M_KM;
    dMiles=dKm/CNV_M_KM/CNV_FT_M/CNV_MI_FT;

    //Output the converted distances
    cout<<"Distance to this star in Km = "
       <<dKm<<"(km)"<<endl;
    cout<<"Distance to this star in Miles = "
       <<dMiles<<"(miles)"<<endl;
    cout<<"hello"<<endl;

    //calculating the time frame
    tyears = (dMiles)/(100000*24*365);
    cout << "it will take " << tyears << " years" <<endl;

    //calculating the Escape Velocity in Km

    escape_v = (dKm)/ (tyears);
    cout << "Your Escape Velocity would be " << escape_v << "kmh" <<endl;


    return 0;
}


