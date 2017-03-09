

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 6, 2017, 9:24 PM
 * Purpose: Calculate the average from a set of five inputted test scores.
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
    float scoreA, scoreB, scoreC, scoreD, scoreE; //Test scores to be inputted
    float avg; //Average of test scores

    //Initialize variables
    cout<<setprecision(1)<<fixed<<showpoint; //Format number output to one decimal
    
    //Input data
    cout<<"Please input each test score.\n"
            "Score #1: "<<endl;
    cin>>scoreA;
    cout<<"Score #2: "<<endl;
    cin>>scoreB;
    cout<<"Score #3: "<<endl;
    cin>>scoreC;
    cout<<"Score #4: "<<endl;
    cin>>scoreD;
    cout<<"Score #5: "<<endl;
    cin>>scoreE;
    
    //Map inputs to outputs or process the data
    avg=(scoreA+scoreB+scoreC+scoreD+scoreE)/5; //Calculation of average from inputs

    //Output the transformed data
    cout<<"The average of the test scores is "<<avg<<"%"<<endl;
    
    //Exit stage right!

    return 0;
}

