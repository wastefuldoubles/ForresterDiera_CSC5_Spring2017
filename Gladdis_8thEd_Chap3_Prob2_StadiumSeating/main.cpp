

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 6, 2017, 12:37 PM
 * Purpose: Calculate income generated from ticket sales.
 */
//System Libraries
#include <iostream>//Input - Output Library
#include <iomanip> //Decimal Formatting
using namespace std; //Name-space under which libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float classA = 15;          //Cost of class A tickets in $'s
    float classB = 12;          //Cost of class B tickets in $'s
    float classC = 9;           //Cost of class C tickets in $'s
    float tcktA, tcktB, tcktC,  //Quantity of each class of ticket
            total;            //Total revenue of ticket sales in $'s

    //Initialize variables
    cout<<setprecision(2)<<fixed<<showpoint; //Number output formatting for $
    
    //Input data
    cout<<"How many class A tickets were sold?"<<endl;
    cin>>tcktA;
    cout<<"How many class B tickets were sold?"<<endl;
    cin>>tcktB;
    cout<<"How many class C tickets were sold?"<<endl;
    cin>>tcktC;
    
    //Map inputs to outputs or process the data
    total=tcktA*classA+tcktB*classB+tcktC*classC; //Total revenue calculation

    //Output the transformed data
    cout<<"The total revenue from class A, class B, and class C"
            " ticket sales amounted to $"<<total<<endl;
    
    //Exit stage right!

    return 0;
}

