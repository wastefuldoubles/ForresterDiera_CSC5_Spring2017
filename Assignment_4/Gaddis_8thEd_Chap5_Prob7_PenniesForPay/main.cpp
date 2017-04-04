

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on April 3, 2017, 7:15 PM
 * Purpose: Calculate the salary of someone whose pay starts with a penny a day
 * and doubles each day after.
 */
//System Libraries
#include <iostream> //Input - Output Library
#include <cmath>    //Math
using namespace std; //Name-space under which libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int   time;   //Number of days
    float salary, //Amount person earned in a day in $
          total;  //Total amount earned at the end of indicated time period
        
    
    //Table titles, inputs and program introduction
    cout<<"This program calculates how much a person would earn given"
            " that their salary doubles each day, with their first"
            " day of pay being equivalent to one penny."<<endl;
    cout<<"How many days did this person work?"<<endl;
    cin>>time;
    if(time<=1){ //Input validation - time greater than or equal to 1 day required
        cout<<"The number of days worked must be at least 1."<<endl;
        cin>>time;
    }
    cout<<"Day  Salary"<<endl;
    
    //Map inputs to outputs or process the data
    for(int day=1;day<=time;day++){
        //Calculate distance traveled
        salary=0.01*pow(2,day-1);
        //Output distance traveled after each hour
        cout<<day<<"     $"<<salary<<endl;
    }
    
    //Calculation of total $ earned
    salary=0.01*pow(2,time-1);  //salary on last day
    total=-(0.01*(1-pow(2,time))); //Total of salaries of all days worked
    cout<<"After working "<<time<<" days, the person would earn $"<<total<<endl;
    
    //Exit stage right!

    return 0;
}

