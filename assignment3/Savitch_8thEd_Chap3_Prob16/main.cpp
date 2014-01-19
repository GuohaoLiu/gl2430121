/* 
 * File:   main.cpp
 * Author:Guohao Liu
 * Created on January 18, 2014, 5:51 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declare variables
    float F,C=100;
    while (C >=-40)
    {
  F = C*9/5+32;

    cout<<C<<" degrees C= "<<F <<" degrees F\n";
     C--;
    }
    return 0;
}
