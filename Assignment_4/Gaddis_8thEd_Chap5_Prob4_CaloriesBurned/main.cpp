

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 30, 2017, 8:25 PM
 * Purpose: Calculate calories burned on a treadmill in five minute increments
 * up to 30 minutes.
 */
//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float calPMin=3.6f; //Calories burned at 3.6 per minute
    float calBrnd;      //Calories burned total
    int minutes=5;      //Number of minutes in each interval
    
    //Table titles and program introduction
    cout<<"This program shows how many calories are burned on the treadmill "
            "in 5 minute intervals."<<endl;
    cout<<"Time in minutes:  Calories Burned:"<<endl;

    //Map inputs to outputs or process the data
    for(int intrvl=1;intrvl<=6;intrvl++){
        //Calculate calories burned
        calBrnd=calPMin*minutes*intrvl;
        //Time and corresponding number of calories burned
        cout<<minutes*intrvl<<"                 "<<calBrnd<<endl;
    }

    //Output the transformed data
    
    //Exit stage right!

    return 0;
}

