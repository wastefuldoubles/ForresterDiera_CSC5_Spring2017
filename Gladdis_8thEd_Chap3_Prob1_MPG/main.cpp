

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 6, 2017, 12:30 PM
 * Purpose: Program to be used to calculate gas mileage.
 */
//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //To set precision
using namespace std; //Name-space under which libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float maxGal, //Gas tank capacity
          miles,  //Miles that can be driven on a full tank
          mpg;    //Miles per gallon

    //Initialize variables
    cout<<setprecision(2)<<fixed<<showpoint; //Format number output to 2 decimals
    
    //Input data
    cout<<"What is your gas tank capacity in gallons?"<<endl;
    cin>>maxGal;
    cout<<"How many miles can your car drive on a full tank of gas?"<<endl;
    cin>>miles;
    
    //Map inputs to outputs or process the data
    mpg=miles/maxGal; //Miles per gallon calculation

    //Output the transformed data
    cout<<"Your gas mileage is "<<mpg<<" miles per gallon."<<endl;
    
    //Exit stage right!

    return 0;
}

