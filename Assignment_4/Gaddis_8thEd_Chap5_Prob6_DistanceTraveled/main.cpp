

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on April 3, 2017, 6:45 PM
 * Purpose: Calculate how far a vehicle travels after each hour based on
 * inputted speed and time.
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
    int time;    //Time the vehicle traveled for in hours
    float speed, //Velocity of vehicle in mph
          dist;  //Distance the vehicle traveled in miles
        
    
    //Table titles, inputs and program introduction
    cout<<"This program calculates how far a vehicle has traveled each hour"
            " based on the speed and number of hours you input."<<endl;
    cout<<"What is the speed of the vehicle in mph?"<<endl;
    cin>>speed;
    if(speed<0){ //Input validation to ensure that speed is positive
        cout<<"Please input a positive speed."<<endl;
        cin>>speed;
    }
    cout<<"How many hours has it traveled?"<<endl;
    cin>>time;
    if(time<1){
        cout<<"The number of hours traveled must be at least 1."<<endl;
        cin>>time;
    }
    cout<<"Hour  Distance Traveled in miles"<<endl;
    

    
    
    //Map inputs to outputs or process the data
    for(int hour=1;hour<=time;hour++){
        //Calculate distance traveled
        dist=hour*speed;
        //Output distance traveled after each hour
        cout<<hour<<"     "<<dist<<endl;
    }
    
    //Exit stage right!

    return 0;
}

