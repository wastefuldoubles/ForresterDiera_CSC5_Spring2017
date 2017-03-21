

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 20, 2017, 7:55 PM
 * Purpose: Convert mass in kilograms to weight in newtons from a range of
 * 10 to 1000 newtons.
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
    float mass, weight; //Mass in kilograms, Weight in newtons

    //Initialize variables
    
    //Input data
    cout<<"What is the object's mass in kilograms?"<<endl;
    cin>>mass;
    
    //Map inputs to outputs or process the data
    weight=mass*9.8; //Mass (kilograms) to weight (newtons)
     
    //Output the transformed data
    if(weight>1000)    //If weight exceeds 1000 newtons, then error message
        cout<<"The object is too heavy!"<<endl;
    else if(weight<10) //If weight is under 10 newtons, then error message
        cout<<"The object is too light!"<<endl;
    else               //If weight is between 10 and 1000 newtons, show conversion
        cout<<"The object weighs "<<weight<<" newtons."<<endl;
    
    //Exit stage right!

    return 0;
}

