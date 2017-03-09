

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on March 18, 2017, 11:54 AM
 * Purpose: Calculate the monthly and annual cost to have an automobile.
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
    float loan, insurnc, gas, //Loan, Insurance, Gas
          oil, tires, mntnc;  //Oil, Tires, Maintenance
    float monthly, annual;    //Monthly and annual costs of having an automobile

    //Initialize variables
    
    //Input data
    cout<<"How much does your loan cost each month?"<<endl;
    cin>>loan;
    cout<<"How much does your insurance cost each month?"<<endl;
    cin>>insurnc;
    cout<<"How much do you pay for gas each month?"<<endl;
    cin>>gas;
    cout<<"How much do you pay for oil each month?"<<endl;
    cin>>oil;
    cout<<"How much do you pay for tires each month?"<<endl;
    cin>>tires;
    cout<<"How much do you pay for maintenance cost each month?"<<endl;
    cin>>mntnc;
    
    //Map inputs to outputs or process the data
    monthly=loan+insurnc+gas+oil+tires+mntnc; //Monthly cost calculation
    annual=monthly*12;                        //Annual cost calculation

    //Output the transformed data
    cout<<"Your monthly cost will be $"<<monthly
            <<", and your annual cost will be $"<<annual<<"."<<endl;
    
    //Exit stage right!

    return 0;
}

