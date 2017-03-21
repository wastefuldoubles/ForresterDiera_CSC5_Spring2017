

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 12, 2017, 10:21 AM
 * Purpose: Convert any number inputted from 1 to 10 to its Roman numeral form.
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
    int number;

    //Initialize variables
    
    //Input data
    cout<<"Please enter a number from 1 to 10."<<endl;
    cin>>number;
    
    //Map inputs to outputs or process the data
    switch (number)
    {
            case 1: cout<<"The Roman numeral for this number is I."<<endl;
            break;
            case 2: cout<<"The Roman numeral for this number is II."<<endl;
            break;
            case 3: cout<<"The Roman numeral for this number is III."<<endl;
            break;
            case 4: cout<<"The Roman numeral for this number is IV."<<endl;
            break;
            case 5: cout<<"The Roman numeral for this number is V."<<endl;
            break;
            case 6: cout<<"The Roman numeral for this number is VI."<<endl;
            break;
            case 7: cout<<"The Roman numeral for this number is VII."<<endl;
            break;
            case 8: cout<<"The Roman numeral for this number is VIII."<<endl;
            break;
            case 9: cout<<"The Roman numeral for this number is IX."<<endl;
            break;
            case 10: cout<<"The Roman numeral for this number is X."<<endl;
            break;
            default:   cout<<"You didn't enter a number from 1 to 10!"<<endl;
    }

    //Output the transformed data
    
    //Exit stage right!

    return 0;
}

