

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 20, 2017, 11:20 PM
 * Purpose: Calculate the amount of points earned from how many books were
 * purchased.
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
    int nBooks, nPoints; //Number of books, Number of points

    //Initialize variables
    
    //Input data
    cout<<"How many books did you buy this month?"<<endl;
    cin>>nBooks;
    
    //Map inputs to outputs or process the data
    nPoints=(nBooks>=4)?60:
            (nBooks>=3)?30:
            (nBooks>=2)?15:
            (nBooks>=1)?5:0;

    //Output the transformed data
    cout<<"For purchasing "<<nBooks<<" books this month, you have "
            "earned "<<nPoints<<" points."<<endl;
    
    //Exit stage right!

    return 0;
}

