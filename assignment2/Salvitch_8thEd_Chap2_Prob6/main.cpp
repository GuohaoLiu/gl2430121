/* 
 * File:   main.cpp
 * Author:Guohao Liu
 * Created on January 15, 2014, 8:46 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
    int Maxrom,NumP,Exceed,Exclu;
    //Input the maximum room capacity and the number of people attending the meeting
    cout<<"Enter the maximum room capacity."<<endl;
    cin>>Maxrom;
    cout<<"Enter the number of people attending the meeting."<<endl;
    cin>>NumP;
    //Output if it is legal.
    Exceed=Maxrom-NumP;
    Exclu=NumP-Maxrom;
    if(Maxrom>=NumP)
        cout<<"It is legal to have "<<NumP<<" people meeting in the room."<<
    "You can have "<< Exceed <<" more people come in the room."<<endl;
    else
        cout<<"It is illegal to have "<<NumP<<" people meeting in the room."<<
    Exclu <<" people must be excluded in order to meet the fire regulation."<<endl;
    return 0;
}

