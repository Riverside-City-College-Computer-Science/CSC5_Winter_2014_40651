/*
   David Ballantyne
   01/07/14
   purpose: star distance conversions
            find out if spooky aliens been to earth
            probably not

   Version 2
   Chanyap Ho
   01/08/14
   purpose: to add in the time required to reach such distance
*/

//Libraries
#include <iostream>
using namespace std;

//Global Constants
const float VC=3e8;//3*10^8 meters/seconds
const float CNV_M_KM=1e-3;//conversion meters to km
const float CNV_M_FT=3.28084e0;//conversion meters to feet
const float CNV_MI_FT=5.280e3;//conversion miles to feet
const float CNV_S_YR=6e1*6e1*2.4e1*3.65e2;//seconds to years
const float VE=1e5;//escape velocity of spacecraft in mph

//Function Prototypes

//Execution Begins Here
int main(){
    //Declare Variables
    float dLtYrs, dMiles, dKm, tMiles;

    //Prompt user
    cout<<"How far away is your star in light years? "<<endl;
    cin>>dLtYrs;

    //Process to calculate in miles and kilometers
    dKm=dLtYrs*VC*CNV_M_KM*CNV_S_YR;//for Km
    dMiles=(dLtYrs*VC*CNV_S_YR*CNV_M_FT)/CNV_MI_FT;//for Miles

    //Process to calculate time required
    tMiles=(dMiles/VE)*(1/2.4e1)*(1/3.65e2);//for time required

    //Output
    cout<<" Distance to this star in Kilometers is "<< dKm <<
          "(Km)" <<endl;
    cout<<endl;

    cout<<" Distance to this star in Miles is "<< dMiles <<
          "(Mi)" <<endl;
    cout<<endl;

    cout<<" Time required to reach this distance based on escape velocity of mph is "<< tMiles <<"(Years)" <<endl;
    cout<<" KMph required to reach in "<< tMiles<<"(Years)is " << (VE*1.609)<<" KMph."<<endl;
    //Exit Stage Right
    return 0;
}

