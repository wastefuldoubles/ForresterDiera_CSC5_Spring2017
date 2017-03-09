

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 6, 2017, 9:42 PM
 * Purpose: Calculate average rainfall for three months.
 */
//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //Number formatting
using namespace std; //Name-space under which libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string month1, month2, month3; //Months to be inputted
    float rain1, rain2, rain3;     //Amount of rainfall in inches for each month
    float avg; //Total rain for the three months

    //Initialize variables
    cout<<setprecision(2)<<fixed<<showpoint; //Format number output to one decimal
    
    //Input data
    cout<<"Please input the name of the month and amount of rain as indicated"<<endl;
    cout<<"Month: "<<endl;
    cin>>month1;
    cout<<"Inches of rain: "<<endl;
    cin>>rain1;
    cout<<"Month: "<<endl;
    cin>>month2;
    cout<<"Inches of rain: "<<endl;
    cin>>rain2;
    cout<<"Month: "<<endl;
    cin>>month3;
    cout<<"Inches of rain: "<<endl;
    cin>>rain3;
    
    //Map inputs to outputs or process the data
    avg=(rain1+rain2+rain3)/3; //Calculation for average rainfall

    //Output the transformed data
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "<<month3
            <<" is "<<avg<<" inches."<<endl;
    
    //Exit stage right!

    return 0;
}

