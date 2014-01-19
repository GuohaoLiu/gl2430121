/* 
 * File:   main.cpp
 * Author:Guohao Liu
 * Created on January 14, 2014, 8:37 PM
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
    float anslry,nwyslry,nwmslry;
    //Input the previous annual salary
    cout<<"Enter the previous annual salary"<<endl;
    cin>>anslry;
    //Output the new annual salary and new monthly salary
    nwyslry=(1+0.076)*(anslry/2)*2;
            nwmslry=(1+0.076)*(anslry/2)/(CONV_MON_YR/2);
            cout<<"The new annual salary is "<<nwyslry<<"($)"<<endl;
    cout<<"The new monthly salary is "<<nwmslry<<"($)"<<endl;
    //Exit stage string
    return 0;
}

