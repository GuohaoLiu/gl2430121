/* 
 * File:   main.cpp
 * Author: Guohao Liu
 *
 * Created on January 10, 2014, 11:25 AM
 */
//System Libraries
#include <iostream>//< iostream>main.cpp:8:21: fatal error:  iostream: No such file or directory    
//iostream>//main.cpp:8:10: error: #include expects "FILENAME" or <FILENAME>
                  //main.cpp:21:5: error: ‘cout’ was not declared in this scope
                  //main.cpp:21:44: error: ‘endl’ was not declared in this scope
                  //main.cpp:22:5: error: ‘cin’ was not declared in this scope


using namespace std;
//Global Constants
const float quarters=25, dimes=10, nickels=5;//Units=(cents)
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //No error detected without int infront of main
    //maiin main.cpp:8:20: warning: extra tokens at end of #include directive [enabled by default]
    //Omit(
//main.cpp:8:20: warning: extra tokens at end of #include directive [enabled by default]
//main.cpp:16:13: error: expected initializer before ‘argc’
    //omit()
//main.cpp:8:20: warning: extra tokens at end of #include directive [enabled by default]
//main.cpp:16:13: error: expected initializer before ‘argc’


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

