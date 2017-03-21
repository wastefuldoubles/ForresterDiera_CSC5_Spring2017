

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
    float length1, width1, area1; //Length, Width, and Area of first rectangle
    float length2, width2, area2; //Length, Width, and Area of second rectangle

    //Initialize variables
    
    //Input data
    cout<<"What is the length and width of the first rectangle?"<<endl;
    cin>>length1>>width1;
    cout<<"What is the length and width of the second rectangle?"<<endl;
    cin>>length2>>width2;
    
    //Map inputs to outputs or process the data
    area1=length1*width1; //Calculate area of first rectangle
    area2=length2*width2; //Calculate area of second rectangle

    //Output the transformed data
    if(area1>area2) //If the first triangle is greater
        cout<<"The area of the first triangle is greater than the area of the "
            "second rectangle."<<endl;
    if(area1==area2) //If the areas are equal
        cout<<"The area of the first triangle is equal to the area of the "
            "second rectangle."<<endl;
    if(area1<area2) //If the first triangle is less
        cout<<"The area of the second triangle is greater than the area of the "
            "first rectangle."<<endl;
    
    
    //Exit stage right!

    return 0;
}

