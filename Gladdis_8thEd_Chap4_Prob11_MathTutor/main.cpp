

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 20, 2017, 10:23 PM
 * Purpose: Produce an addition problem for the user to solve, and tell
 * the user whether their answer was correct.
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
    int n1=rand()%1000, //Random number between 1 and 1000
        n2=rand()%1000, //Random number between 1 and 1000
        total, userA;   //Actual sum of the two numbers, User's answer

    //Initialize variables
    
    //Input data
    cout<<"Solve this equation."<<endl;
    cout<<" "<<n1<<endl;
    cout<<"+"<<n2<<endl;
    cout<<"________"<<endl;
    cin>>userA;
    
    //Map inputs to outputs or process the data
    total=n1+n2; //Calculate sum of the two numbers

    //Output the transformed data
    if(total==userA) //If their answer is correct, congratulate user
        cout<<"Congratulations! That is the correct answer."<<endl;
    else    //If their answer is incorrect, provide the user with correct total
        cout<<"Sorry, your answer is incorrect. The correct answer is "
                <<total<<"."<<endl;
    
    //Exit stage right!

    return 0;
}

