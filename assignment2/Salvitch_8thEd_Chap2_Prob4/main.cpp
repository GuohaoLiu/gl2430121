/* 
 * File:   main.cpp
 * Author:Guohao Liu
 * Created on January 14, 2014, 9:16 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//Global Constants
const float CONV_MON_YR=12;
//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declare variables
    float anslry,nwyslry,nwmslry,nummon,safmon;
    //Input the previous annual salary
    cout<<"Enter the previous annual salary and the number of months"<<endl;
    cin>>anslry >>nummon;
    //Output the new annual salary, new monthly salary, and salary for number of month
    nwyslry=(1+0.076)*anslry;
            nwmslry=((1+0.076)*anslry)/CONV_MON_YR;
            safmon=(((1+0.076)*(anslry))/CONV_MON_YR)*nummon;
            cout<<"The new annual salary is "<<nwyslry <<"($)"<<endl;
    cout<<"The new monthly salary is "<<nwmslry <<"($)"<<endl;
    cout<<"The salary for a worker for "<<nummon <<" months is "<<safmon;
            cout<<"($)"<<endl;
    //Exit stage string
    return 0;
}

