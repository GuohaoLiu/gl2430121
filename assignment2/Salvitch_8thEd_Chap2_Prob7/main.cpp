/* 
 * File:   main.cpp
 * Author:Guohao Liu
 * Created on January 15, 2014, 9:30 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
    float hours,NumDep,grospay,exhrpay,AmSST,AmFIT,AmSIT,AmUD,Net;
    //Input the number of hours in a worked in a week and the number of dependents
    cout<<"How many hours worked in a week?"<<endl;
    cin>>hours;
    cout<<"Enter the number of dependents"<<endl;
    cin>>NumDep;
    //Output the gross pay
    if(hours<=40)
    grospay=16.78*hours;
    else
        exhrpay=(hours-40)*(16.78*1.5);
        grospay=16.78*40+exhrpay;
        if(NumDep>=3)
            grospay=grospay-35;
    else
        grospay=grospay;
            
    cout<<"The gross pay of the worker is "<<grospay<< "($)"<<endl;
    //Output the Social Security tax withholding amount, federal income tax withholding amount,
    //state income tax withholding amount, 10$ per week withholding amount, and the net income.
    AmSST=grospay*0.06;
    AmFIT=grospay*0.14;
    AmSIT=grospay*0.05;
    AmUD=10;
    Net=grospay-AmSST-AmFIT-AmSIT-AmUD;
    cout<<"The Social Security tax withholding amount is "<<AmSST<< "($)"<<endl;
    cout<<"The federal income tax withholding amount is "<<AmFIT<< "($)"<<endl;
    cout<<"The state income tax withholding amount is "<<AmSIT<< "($)"<<endl;
    cout<<"The 10$ per week withholding amount is "<<AmUD<< "($)"<<"per week"<<endl;
    cout<<"The net take-home pay is "<<Net<< "($)"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    //Exit stage right
    return 0;
}

