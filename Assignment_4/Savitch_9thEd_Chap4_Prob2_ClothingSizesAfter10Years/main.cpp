

/* 
 * File:   main.cpp
 * Author: Diera Forrester
 * Created on April 3, 2017, 9:15 PM
 * Purpose: Calculate a person's clothing size based off of the user's height,
 * age, and weight now and in ten years.
 */
//System Libraries
#include <iostream> //Input - Output Library
#include <cmath>    //Math
using namespace std; //Name-space under which libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float height,  //User's height in inches
          weight,  //User's weight in lbs
          age,     //User's age
          newAge,  //User's age in ten years
          hatSize, //User's hat size
          jktSize, //User's jacket size (chest size in inches)
          waist;   //User's waist measurement in inches
    char choice;   //Prompt to continue program
        
    //Input data
    do{
        cout<<"This program calculates your hat size, jacket size, and waist\n"
                "now and in ten years based on your height, weight, and age.\n"
                "Press 1 to continue or any other key to exit the program."
                <<endl;
        cin>>choice;
        if(!(choice=='1')){
            cout<<"Exit the program."<<endl;
            exit(0);
        }
        cout<<"What is your height in inches?"<<endl;
        cin>>height;
        cout<<"What is your weight in pounds?"<<endl;
        cin>>weight;
        cout<<"What is your age?"<<endl;
        cin>>age;
        //Clothing size calculations NOW
        hatSize=2.9*weight/height;
        if((age-30)>=10) //Add 1/8 an inch for every 10 years over age 30
            jktSize=height*weight/288.0f+0.125f*(age/10-3);
        else
            jktSize=height*weight/288.0f;
        if((age-28)>=2)  //Add 1/10 an inch for every 2 years over age 28
            waist=weight/5.7f+0.1f*(age/2-14);
        else
            waist=weight/5.7f;
        //Clothing size outputs NOW
        cout<<"Now:"<<endl;
        cout<<"Your hat size is "<<hatSize<<endl;
        cout<<"Your jacket size, or chest size, is "<<jktSize<<" inches"<<endl;
        cout<<"Your waist is "<<waist<<" inches"<<endl<<endl;
        //Add ten years
        newAge=age+10;
        //Clothing size calculations IN TEN YEARS
        hatSize=2.9*weight/height;
        if((newAge-30)<=10) //Add 1/8 an inch for every 10 years over age 30
            jktSize=height*weight/288.0f+0.125f*(newAge/10-3);
        else
            jktSize=height*weight/288.0f;
        if((newAge-28)<=2)  //Add 1/10 an inch for every 2 years over age 28
            waist=weight/5.7f+0.1f*(newAge/2-14);
        else
            waist=weight/5.7f;
        //Clothing size outputs IN TEN YEARS
        cout<<"In ten years:"<<endl;
        cout<<"Your hat size will be "<<hatSize<<endl;
        cout<<"Your jacket size, or chest size, will be "<<jktSize<<" inches"<<endl;
        cout<<"Your waist will be "<<waist<<" inches"<<endl;
    }while(choice=='1');
    
    //Exit stage right!

    return 0;
}

