/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 30, 2017, 11:23 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>  //
#include <cstdlib>   //Random nubmer generator
#include <ctime>     //Set the random number seed
#include <iomanip>   //Number formatting
using namespace std; //Name-space under which system libraries exist

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare all Variables Here
    int op1, op2, result, answer;
    char choice;

    //Input data
    do{
        cout<<"Math Tutor"<<endl;
        cout<<"Choose the operation * / + - or anything else to exit."<<endl;
        cin>>choice;
        cout<<endl;
        if(!(choice=='+'||choice=='-'||choice=='/'||choice=='*')){
            cout<<"Exit the Math Tutor."<<endl;
            exit(0);
        }

        //Process/Calculations Here
        switch(choice){
            case '+':{
                op1=rand()%900+100; //[100-999]
                op2=rand()%900+100; //[100-999]
                answer=op1+op2; //[3 to 4 digit result]
                break;
            }
            case'-':{
                op1=rand()%900+100; //[100-999]
                op2=rand()%900+100; //[100-999]
                answer=op1-op2; //[3 to 4 digit result]
                break;

            }
            case'*':{
                op1=rand()%90+10; //[10-99]
                op2=rand()%90+10; //[10-99]
                answer=op1*op2; //[2 to 4 digit result]
                break;

            }
            case'/':{
                answer=rand()%90+10; //[10-99]
                op2=rand()%90+10;      //[10-99]
                op1=answer*op2; //[2 to 3 digit result]
                break;

            }
            default:{
                cout<<"Bad operator"<<endl;
                return 1;
            }
        }

        //Output Located Here
        cout<<setw(8)<<op1<<endl;
        cout<<choice<<setw(7)<<op2<<endl;
        cout<<"--------"<<endl;
        cin>>result;

        //Compare the answer
        cout<<endl;
        cout<<(result==answer?"Correct":"Incorrect")<<endl;
        cout<<"The answer = "<<answer<<endl<<endl<<endl;
}while(choice=='+'||choice=='-'||choice=='/'||choice=='*');

    //Exit
    return 0;
}

