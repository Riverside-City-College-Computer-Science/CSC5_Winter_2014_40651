/*
   David Ballantyne
   01/07/14
   purpose: star distance conversions
            find out if spooky aliens been to earth
            probably not
   Version 2
   Name: Drew Allensworth
   Date: 01/08/14
   Purpose: To add functionality
            calculate travel time in years
*/
//Libraries
#include <iostream>
using namespace std;

//Gloabl Constants
const float VC=3e8;//3*10^8
const float CNV_M_KM=1e-3;//conversion meters to km
const float CNV_M_FT=3.28084e0;//conversion meters to feet
const float CNV_MI_FT=5.280e3;//conversion miles to feet
const float CNV_S_YR=3.15360e7;//seconds to years
const float VE=1e5;//100,000 mph Escape Velocity of Earth
const float CNV_HR_DY=2.4e1;//hours per day
const float CNV_DY_YR=3.65e2;//days per year
//Functioning Prototypes

//Execution Belings Here
int main(){
    //Declare Variables
    float dLtYrs, dMiles, dKm, TravDy, TravYr, VelKm;

    //Prompt user
    cout<<"How far away is your star in light years? "<<endl;
    cin>>dLtYrs;

    //Processs calculate in miles and kilometers
    dKm=dLtYrs*VC*CNV_M_KM*CNV_S_YR;//for Km
    dMiles=(dLtYrs*VC*CNV_S_YR*CNV_M_FT)/CNV_MI_FT;//for Miles
    TravDy=dMiles/VE;//for time in days
    TravYr=TravDy/CNV_HR_DY/CNV_DY_YR;//for time in years
    VelKm=(dKm/TravYr)/CNV_DY_YR/CNV_HR_DY;//velocity in KM/h

    //Output
    cout<<" Distance to this star in Kilometers is "<< dKm <<
          "(Km)" <<endl;

    cout<<" Distance to this star in Miles is "<< dMiles <<
          "(Mi)" <<endl;

    cout<<" Travel time to star in years is "<< TravYr <<
          "(Yrs)" <<endl;

    cout<<" The Escape Velocity in Km is " <<VelKm
        <<"Km/h" <<endl;

    //Exit Stage Right
    return 0;
}

