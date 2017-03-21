

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 18, 2017, 11:54 AM
 * Purpose: Program to be used to calculate the subtotal 
 * and taxed total cost of a group of items.
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
    int day, month, year;

    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout<<"Input a date to see if it's magic."<<endl;
    cout<<"Enter the day:"<<endl;
    cin>>day;
    cout<<"Enter the month in numeric form:"<<endl;
    cin>>month;
    cout<<"Enter the last two digits of the year:"<<endl;
    cin>>year;

    //Output the transformed data
    if (year==month*day)
        cout<<"Congratulations! You have a magic date."<<endl;
    else
    {
        cout<<"Your date is not magic."<<endl;
    }
    
    //Exit stage right!

    return 0;
}

