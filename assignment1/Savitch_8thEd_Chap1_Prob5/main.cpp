/* 
 * File:   main.cpp
 * Author: Guohao Liu
 *
 * Created on January 9, 2014, 9:51 AM
 */
//System Libraries
#include <iostream>

using namespace std;

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare variable
    float x, y, sum, product;
    //input x, y;
    cout<<"What is the first integer x?"<<endl;
    cin>>x;
    cout<<"What is the second integer y?"<<endl;
    cin>>y;
    //Process - calculate the sum and product of x and y;
    sum=x+y;
    product=x*y;
    cout<<"the sum of the x and y is "
            <<sum<<"."<<endl;

    cout<<"the product of the x and y is "
            <<product<<"."<<endl;
    cout<<"This is the end of the program."<<endl;
    return 0;
}

