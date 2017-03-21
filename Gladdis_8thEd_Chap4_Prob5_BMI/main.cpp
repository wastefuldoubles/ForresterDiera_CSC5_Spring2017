

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 20, 2017, 7:33 PM
 * Purpose: Calculate BMI and determine whether a person is overweight,
 * underweight, or at optimal weight.
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
    float height, weight, bmi; //Height in inches, Weight in lbs, BMI

    //Initialize variables
    
    //Input data
    cout<<"What is your height in inches?"<<endl;
    cin>>height;
    cout<<"How much do you weigh in lbs?"<<endl;
    cin>>weight;
    
    //Map inputs to outputs or process the data
    bmi=weight*703/height/height; //BMI calculation

    //Output the transformed data
    cout<<"You have a BMI of "<<bmi;
    if(bmi<=18.5)    //If BMI is 18.5 or less, the person is underweight
        cout<<", which means you are underweight."<<endl;
    else if(bmi>=25) //If BMI is 25 or more, the person is overweight
        cout<<", which means you are overweight."<<endl;
    else             //If BMI is between 18.5 and 25, the person's weight is optimal
        cout<<", which means that you are at an optimal weight."<<endl;
                
    
    //Exit stage right!

    return 0;
}

