

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 18, 2017, 11:54 AM
 * Purpose: Convert Celsius to Fahrenheit.
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
    float celsius, fahren; //Celsius and Fahrenheit

    //Initialize variables
    
    //Input data
    cout<<"What is the temperature in Celsius?"<<endl;
    cin>>celsius;
    
    //Map inputs to outputs or process the data
    fahren=9*celsius/5+32; //Fahrenheit to celsius conversion formula

    //Output the transformed data
    cout<<"The temperature is "<<fahren<<" degrees Fahrenheit."<<endl;
    
    //Exit stage right!

    return 0;
}

