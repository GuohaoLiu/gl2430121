/* 
 * File:   main.cpp
 * Author:Guohao Liu
 * Created on January 14, 2014, 10:05 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//Global Constants
const int CONV_YR_MON=12 ;
//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declare variables
    float intrate, drlmon, amount, facval;
    //Input the amount the consumer needs to receive, interest rate, and duration of the loan in month
    cout<<"Enter the amount the consumer needs to receive"<<endl;
    cin>>amount;
    cout<<"Enter the duration of the loan in month"<<endl;
    cin>>drlmon;
    cout<<"Enter the interest rate"<<endl;
    cin>>intrate;
    //Output the face value
    facval=amount/(1-drlmon/CONV_YR_MON*intrate);
    cout<<"The face value is "<<facval <<"($)"<<endl;
    return 0;
}

