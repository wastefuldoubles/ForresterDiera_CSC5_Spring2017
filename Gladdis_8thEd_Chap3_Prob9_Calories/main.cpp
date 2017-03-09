

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 6, 2017, 10:46 PM
 * Purpose: Calculate how many calories consumed from cookies eaten.
 */
//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which libraries exist

//User Libraries

//Global Constants
const int serving = 3; //Cookies in a serving
const int calServ = 300; //Calories in a serving

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int cookies,  //Cookies eaten
        clries; //Calories consumed

    //Initialize variables
    
    //Input data
    cout<<"How many cookies did you eat? Don't be lying now."<<endl;
    cin>>cookies;
    
    //Map inputs to outputs or process the data
    clries=cookies*calServ/serving; //Calories per cookie

    //Output the transformed data
    cout<<"You have consumed "<<clries<<" calories."<<endl;
    
    //Exit stage right!

    return 0;
}

