/* 
 * File:   main.cpp
 * Author:Guohao Liu
 * Created on January 15, 2014, 11:36 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float Sum,SumfP=0,SumfN=0,aveOP,aveON,x;
    float num=0,numoP=0,numoN=0;
    //Input the 10 numbers
    cout<<"Enter 10 numbers"<<endl;
    while(num<10){
            cin>>x;
    Sum+=x;
    if(x>=0)
        SumfP+=x;
    
    else
        SumfN+=x,numoN++;
    if(x>=0)
        numoP++;
    else
        numoN++;
    num++;}
aveOP=SumfP/numoP;
aveON=SumfN/numoN;
    cout<<"The sum of all positive numbers is "<<SumfP<<endl;
    cout<<"The sum of all negative numbers is "<<SumfN<<endl;
    cout<<"The sum of all numbers is "<<Sum<<endl;
    cout<<"The average of all positive numbers is "<<aveOP<<endl;
    cout<<"The average of all non positive numbers is "<<numoN<<endl;
    return 0;
}
