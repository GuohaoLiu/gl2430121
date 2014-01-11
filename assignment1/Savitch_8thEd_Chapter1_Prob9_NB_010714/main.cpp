/* 
 * File:   main.cpp
 * Author: Guohao Liu
 * Created on January 8, 2014, 5:53 AM
 */
//System Libraries
#include <iostream>
using namespace std;


//Global Constants
const float GRAVITY=32.174;//Units = (ft)

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declare variables
    float time, frefall;
    //input the time
    cout<<"input the time is seconds";
    cin>>time;
    //Calculate the distance dropped
    frefall=0.5*GRAVITY*time*time;
    //output the result
    cout<<"The distance dropped = "
            <<frefall<<"(ft)"<<endl;
    //Exit Stage Right
    return 0;
}

