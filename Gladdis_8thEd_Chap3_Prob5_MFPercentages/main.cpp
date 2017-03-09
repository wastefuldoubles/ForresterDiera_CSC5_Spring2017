

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 6, 2017, 10:01 PM
 * Purpose: Calculate percentage of males and females in a class.
 */
//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which libraries exist

//User Libraries

//Global Constants
const float PERCENT = 100; //Percent conversion

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float males, females;    //Numbers of males and females to be inputted
    int mPercnt, fPercnt; //Percent of males and females to be calculated

    //Initialize variables
    
    //Input data
    cout<<"Please input the number of males in the class:"<<endl;
    cin>>males;
    cout<<"Please input the number of females in the class:"<<endl;
    cin>>females;
    
    //Map inputs to outputs or process the data
    mPercnt=males/(males+females)*PERCENT;   //Calculate male percentage
    fPercnt=females/(males+females)*PERCENT; //Calculate female percentage
            
    //Output the transformed data
    cout<<"The class consists of "<<mPercnt<<"% males and "<<fPercnt<<"% females."<<endl;
    
    //Exit stage right!

    return 0;
}

