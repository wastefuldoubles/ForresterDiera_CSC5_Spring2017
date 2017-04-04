

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on April 1, 2017, 5:45 PM
 * Purpose: Calculate the increase in membership fees each year for 6 years
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
    float anFee=2500.0; //Initial annual fee in $
    float increas=0.04;  //4% increase of membership fee annually
    float nuAnFee;       //New annual fee in $ after increase
    
    //Chart title
    cout<<"Year      Annual Membership Fee"<<endl;
    
    //Map inputs to outputs or process the data
    for (int year=1;year<=6;year++){
        nuAnFee=anFee+nuAnFee*increas*(year-1);
        cout<<year<<"        $"<<nuAnFee<<endl;
    }

    //Output the transformed data
    
    //Exit stage right!

    return 0;
}

