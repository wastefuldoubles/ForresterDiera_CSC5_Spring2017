/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Menu that provides easy access to programming problems
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    //Show menu and loop
    do{
        //Display Menu
        cout<<endl<<endl<<"Type 0 to exit"<<endl;
        cout<<"Type 1 for Savitch 9th Edition, Chapter 4, Problem 2"<<endl;
        cout<<"Type 2 for Savitch 9th Edition, Chapter 4, Problem 3"<<endl;
        cout<<"Type 3 for Savitch 9th Edition, Chapter 4, Problem 7"<<endl;
        cout<<"Type 4 for Gaddis 8th Edition, Chapter 5, Problem 3"<<endl;
        cout<<"Type 5 for Gaddis 8th Edition, Chapter 5, Problem 4"<<endl;
        cout<<"Type 6 for Gaddis 8th Edition, Chapter 5, Problem 5"<<endl;
        cout<<"Type 7 for Gaddis 8th Edition, Chapter 5, Problem 6"<<endl;
        cout<<"Type 8 for Gaddis 8th Edition, Chapter 5, Problem 7"<<endl;
        cout<<"Type 9 for Gaddis 8th Edition, Chapter 5, Problem 8"<<endl<<endl;
        
        //Input the choice
        cout<<"Problem ";
        cin>>choice;
        
        //Place solutions to problems in switch statement
        switch(choice){
            case '1':{
                //Declare variables
                float height,  //User's height in inches
                      weight,  //User's weight in lbs
                      age,     //User's age
                      hatsize, //User's hat size
                      jktsize, //User's jacket size (chest size in inches)
                      waist;   //User's waist measurement in inches
                char choice;   //Prompt to continue program

                //Input data
                do{
                    cout<<"This program calculates your hat size, jacket size, and waist\n"
                            "based on your height, weight, and age. Press 1 to continue\n"
                            "or any other key to exit the program."<<endl;
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
                    //Clothing size calculations
                    hatsize=2.9*weight/height;
                    if((age-30)>=10) //Add 1/8 an inch for every 10 years over age 30
                        jktsize=height*weight/288.0f+0.125f*(age/10-3);
                    else
                        jktsize=height*weight/288.0f;
                    if((age-28)>=2)  //Add 1/10 an inch for every 2 years over age 28
                        waist=weight/5.7f+0.1f*(age/2-14);
                    else
                        waist=weight/5.7f;
                    //Clothing size outputs
                    cout<<"Your hat size is "<<hatsize<<endl;
                    cout<<"Your jacket size, or chest size, is "<<jktsize<<" inches"<<endl;
                    cout<<"Your waist is "<<waist<<" inches"<<endl;
                }while(choice=='1');
                break;
            }
            case '2':{
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
                
                break;
            }
            case '3':{
                //Global Constants Only, No Global Variables
                //Like PI, e, Gravity, or conversions
                const float MSSERTH=5.972e27f;   //Mass of earth in grams
                const float GCONST=6.673E-8f;    //Gravitational Constant cm^3/gm sec^2
                const float CNVFTCM=1.0f/30.48f; //Conversion from ft to cm
                const float CNVMFT=5280.0f;     //Conversion from miles to feet
                const float RADERTH=3959;        //Radius of the Earth in miles

                //Declare all Variables Here
                float myWeight; //Result in lbs
                float myMass=6; //Units of slugs

                //Process/Calculations Here
                myWeight=GCONST*CNVFTCM*CNVFTCM*CNVFTCM*MSSERTH*myMass
                        /(RADERTH*RADERTH*CNVMFT*CNVMFT);

                //Output Located Here
                cout<<"You weigh "<<myWeight<<" lbs"<<endl;
                
                break;
            }
            case '4':{
                //Declare variables
                float rise=1.5; //Ocean rises 1.5mm every year

                //Table Labels
                cout<<"Years: Height Risen:"<<endl;

                //Map inputs to outputs or process the data
                for(int yrs=1;yrs<=25;yrs++){
                    cout<<yrs<<"      "<<yrs*rise<<"mm"<<endl;
                }
                break;
            }
            case '5':{
                //Declare variables
                float calPMin=3.6f; //Calories burned at 3.6 per minute
                float calBrnd;      //Calories burned total
                int minutes=5;      //Number of minutes in each interval

                //Table titles and program introduction
                cout<<"This program shows how many calories are burned on the treadmill "
                        "in 5 minute intervals."<<endl;
                cout<<"Time in minutes:  Calories Burned:"<<endl;

                //Map inputs to outputs or process the data
                for(int intrvl=1;intrvl<=6;intrvl++){
                    //Calculate calories burned
                    calBrnd=calPMin*minutes*intrvl;
                    //Time and corresponding number of calories burned
                    cout<<minutes*intrvl<<"                 "<<calBrnd<<endl;
                }
                break;
            }
            case '6':{
                //Declare variables
                float anFee=2500.0; //Initial annual fee in $
                float increas=0.04;  //4% increase of membership fee annually
                float nuAnFee;       //New annual fee in $ after increase

                //Chart title
                cout<<"Year      Annual Membership Fee"<<endl;

                //Map inputs to outputs or process the data
                for (int year=1;year<=6;year++){
                    nuAnFee=anFee+nuAnFee*increas*(year-1);
                    cout<<year<<"        $"<<nuAnFee<<endl;
                }
                break;
            }
            case '7':{
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
                break;
            }
            case '8':{
                //Declare variables
                int   time;   //Number of days
                float salary, //Amount person earned in a day in $
                      total;  //Total amount earned at the end of indicated time period

                //Table titles, inputs and program introduction
                cout<<"This program calculates how much a person would earn given"
                        " that their salary doubles each day, with their first"
                        " day of pay being equivalent to one penny."<<endl;
                cout<<"How many days did this person work?"<<endl;
                cin>>time;
                if(time<=1){ //Input validation - time greater than or equal to 1 day required
                    cout<<"The number of days worked must be at least 1."<<endl;
                    cin>>time;
                }
                cout<<"Day  Salary"<<endl;

                //Map inputs to outputs or process the data
                for(int day=1;day<=time;day++){
                    //Calculate distance traveled
                    salary=0.01*pow(2,day-1);
                    //Output distance traveled after each hour
                    cout<<day<<"     $"<<salary<<endl;
                }

                //Calculation of total $ earned
                salary=0.01*pow(2,time-1);  //salary on last day
                total=-(0.01*(1-pow(2,time))); //Total of salaries of all days worked
                cout<<"After working "<<time<<" days, the person would earn $"<<total<<endl;
                break;
            }
            case '9':{
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
                break;
            }
            default:{
                cout<<"Exit the program."<<endl;
            }
        }
        
    
    }while(choice>='1'&&choice<='9');

    //Exit
    return 0;
}

