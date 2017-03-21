

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 20, 2017, 9:22 PM
 * Purpose: Create a game that prompts the user to input the quantity of coins
 * that add up to a dollar.
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
    float penny=.01,   //A penny is .01 of a dollar
          nickel=.05,  //A nickel is .05 of a dollar
          dime=.10,    //A dime is .10 of  a dollar
          quarter=.25; //A quarter is .25 of a dollar
    float nPenny,      //Quantity of pennies
          nNickel,     //Quantity of nickels
          nDime,       //Quantity of dimes
          nQuartr,     //Quantity of quarters
          total;       //Total of all coins

    //Initialize variables
    
    //Input data
    cout<<"To play the game, enter the quantity of each type of coin to add up"
            "to exactly one dollar."<<endl;
    cout<<"Pennies = "<<endl;
    cin>>nPenny;
    cout<<"Nickels = "<<endl;
    cin>>nNickel;
    cout<<"Dimes = "<<endl;
    cin>>nDime;
    cout<<"Quarters = "<<endl;
    cin>>nQuartr;
    
    //Map inputs to outputs or process the data
    total=penny*nPenny+nickel*nNickel+dime*nDime+quarter*nQuartr; //Total calculation
    
    //Output the transformed data
        if(total==1.00) //If total coin value equals a dollar, congratulate user
        cout<<"Congratulations, you have won the game!"<<endl;
    else if(total>1.00) //If total coin value is more than a dollar, notify user
        cout<<"The total amount from the coins entered was more than one "
                "dollar. Try again."<<endl;
    else                //If total coin value is less than a dollar, notify user
        cout<<"The total amount from the coins entered was less than one "
                "dollar. Try again."<<endl;
    
    //Exit stage right!

    return 0;
}

