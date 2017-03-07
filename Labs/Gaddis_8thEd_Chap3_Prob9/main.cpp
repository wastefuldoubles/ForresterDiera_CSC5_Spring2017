/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 7, 2017, 12:05 PM
 * Purpose:  Calculate number of candy bars
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char sex;                   //M or F
    unsigned short ht, wt, age; //Height(in), Weight(lbs), Age(yrs)
    unsigned char cdyCals=230;  //Candy bar calories
    float bmr;   //Basic Metabolic Rate (calories)
    int nCdyBrs; //Number of candy bars we can eat
    
    //Input or initialize values Here
    cout<<"This program calulates the number of ";
    cout<<"candy bars allowed per day based upon your BMR"<<endl;
    cout<<"Type in your Sex(M/F), Wt(lbs), Ht(in), Age(yrs)"<<endl;
    cout<<"Inputs are integer based"<<endl;
    cin>>sex>>wt>>ht>>age;
    
    //Process/Calculations Here
    bmr=(sex=='M')?
        66 + 6.3f*wt + 12.9f*ht - 6.8f*age:
       665 + 4.3f*wt +  4.7f*ht - 4.7f*age;
    nCdyBrs=static_cast<int>(bmr/cdyCals);
    
    //Output Located Here
    cout<<"The number of candy bars you can eat = "<<nCdyBrs<<endl;

    //Exit
    return 0;
}

