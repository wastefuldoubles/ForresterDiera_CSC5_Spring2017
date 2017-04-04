

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 29, 2017, 8:30 PM
 * Purpose: Calculate projected ocean levels for the next 25 years.
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
    float rise=1.5; //Ocean rises 1.5mm every year

    //Table Labels
    cout<<"Years: Height Risen:"<<endl;
    
    //Map inputs to outputs or process the data
    for(int yrs=1;yrs<=25;yrs++){
        cout<<yrs<<"      "<<yrs*rise<<"mm"<<endl;
    }

    //Output the transformed data
    
    //Exit stage right!

    return 0;
}

