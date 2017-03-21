

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 20, 2017, 10:39 PM
 * Purpose: Calculate the discount and cost of a purchase based on quantity of
 * units sold.
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
    int unit=99,         //Cost of a unit
        nUnits;          //Quantity of units
    float total, discnt; //Total cost of purchase, Discount on purchase

    //Initialize variables
    
    //Input data
    cout<<"How many units will you purchase?"<<endl;
    cin>>nUnits;
    if(nUnits==0){
        cout<<"You can't buy zero units."<<endl;
        return 1; //Use DeMorgan's Law to make clearer
    }

    
    //Map inputs to outputs or process the data
    discnt=(nUnits>=100)?(0.50): 
           (nUnits>=50)?(0.40):
           (nUnits>=20)?(0.30):
           (nUnits>=10)?(0.20):(0);
    total=nUnits*unit-(discnt*nUnits*unit); //Calculation of total with discount

    //Output the transformed data
    cout<<"The total will be $"<<total<<endl;
    
    //Exit stage right!

    return 0;
}

