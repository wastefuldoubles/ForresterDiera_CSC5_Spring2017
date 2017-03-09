

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 18, 2017, 11:54 AM
 * Purpose: Calculate the minimum amount of insurance to buy for one's property.
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
    float minIns = .8;      //80% is the minimum value of insurance to buy
    float propVal, insurnc; //Property value, Insurance amount

    //Initialize variables
    
    //Input data
    cout<<"How much money would it cost to replace your property?"<<endl;
    cin>>propVal;
    
    //Map inputs to outputs or process the data
    insurnc=minIns*propVal; //80% of property value

    //Output the transformed data
    cout<<"You should buy $"<<insurnc<<" in insurance."<<endl;
    
    //Exit stage right!

    return 0;
}

