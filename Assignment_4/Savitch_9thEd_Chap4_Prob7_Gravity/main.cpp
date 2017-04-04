/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 30, 2017, 12:07 PM
 * Purpose:  Calculate your weight
 */

//System Libraries Here
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float MSSERTH=5.972e27f;   //Mass of earth in grams
const float GCONST=6.673E-8f;    //Gravitational Constant cm^3/gm sec^2
const float CNVFTCM=1.0f/30.48f; //Conversion from ft to cm
const float CNVMFT=5280.0f;     //Conversion from miles to feet
const float RADERTH=3959;        //Radius of the Earth in miles

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float myWeight; //Result in lbs
    float myMass=6; //Units of slugs
    
    //Process/Calculations Here
    myWeight=GCONST*CNVFTCM*CNVFTCM*CNVFTCM*MSSERTH*myMass
            /(RADERTH*RADERTH*CNVMFT*CNVMFT);
    
    //Output Located Here
    cout<<"You weigh "<<myWeight<<" lbs"<<endl;

    //Exit
    return 0;
}

