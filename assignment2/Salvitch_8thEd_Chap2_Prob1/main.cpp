/* 
 * File:   main.cpp
 * Author:Guohao Liu
 * Created on January 15, 2014, 8:25 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//Global Constants
const float CONV_TON_OUNC=35273.92;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float Mton,ounces;
    //Input the weight in ounces
    cout<<"Enter the weight in ounces"<<endl;;
    cin>>ounces;
    //Output the weight in metric ton
    Mton=ounces/CONV_TON_OUNC;
    cout<<"The weight in metric ton is "<<Mton <<"(metric ton)"<<endl;
    //Exit stage right
    return 0;
}

