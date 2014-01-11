/* 
 * File:   main.cpp
 * Author: Guohao Liu
 *
 * Created on January 10, 2014, 3:13 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//Global Constants
const float quarters=25, dimes=10, nickels=5;//Units=(cents)
int main(int argc, char** argv) {
    //declare variable
    float quarters, dimes, nickels, cents;
    //input quarters, dimes, nickels;
    cout<<"Enter the number of quarters "<<endl;
    cin>>quarters;
    cout<<"Enter the number of dimes "<<endl;
    cin>>dimes;
    cout<<"Enter the number of nickels "<<endl;
    cin>>nickels;
    //Process - calculate the monetary value of the coins in cents

    cents=25*quarters+10*dimes+5*nickels;
    cout<<"the number of cents is "
            <<cents <<endl;
    return 0;
}
