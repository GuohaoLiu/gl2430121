/* 
 * File:   main.cpp
 * Author: Guohao Liu
 * Created on January 18, 2014, 5:46 PM
 * Prob 14
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    int numb, i, count;
    //Output    
    cout<<"The prime numbers are follow."<<endl;
        for (numb=3;numb<=100;numb++){
          count=0;
          for(i=2;i<=numb/2;i++){
              if(numb%i==0){
                  count++;
                  break;
              }
          }
          if(count==0 && numb!=1){
              cout<<numb<<setw(3);
          }
        }
       
               
    return 0;
}

