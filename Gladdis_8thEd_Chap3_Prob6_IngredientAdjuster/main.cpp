

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 6, 2017, 10:23 PM
 * Purpose: Calculate the amount of each ingredient required to make
 * the indicated number of cookies.
 */
//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //Number formatting
using namespace std; //Name-space under which libraries exist

//User Libraries

//Global Constants
const float sugar = 1.5;  //Sugar needed for a full recipe in cups
const float butter = 1.0; //Butter needed for a full recipe in cups
const float flour = 2.75; //Flour needed for a full recipe in cups

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float prop,                      //Proportion of one full recipe
            nSugar, nButter, nFlour; //The new amounts of sugar, butter, and flour
    float cookies;                     //Number of cookies inputted

    //Initialize variables
    cout<<setprecision(2)<<fixed<<showpoint; //Format number output to second decimal
    
    //Input data
    cout<<"How many cookies do you want to make?"<<endl;
    cin>>cookies;
    
    //Map inputs to outputs or process the data
    prop=cookies/48;     //Calculate proportion of full recipe
    nSugar=prop*sugar;   //Calculate new amount of sugar in cups
    nButter=prop*butter; //Calculate new amount of butter in cups
    nFlour=prop*flour;   //Calculate new amount of flour in cups

    //Output the transformed data
    cout<<"To make "<<cookies<<" cookies , you will need:\n"
            <<nSugar<<" cups of sugar\n"
            <<nButter<<" cups of butter\n"
            <<nFlour<<" cups of flour"<<endl;
    
    //Exit stage right!

    return 0;
}

