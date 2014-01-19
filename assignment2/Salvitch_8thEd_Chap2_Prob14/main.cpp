/* 
 * File:   main.cpp
 * Author:Guohao Liu
 * Created on January 17, 2014, 4:34 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declare variables
    string FLname,Yname,food,adjec,color,animal;
    int num;
//Input the name, your name,food,number between 100-120,an adjective,color,animal
    cout<<"Enter the first name or last name of your professor"<<endl;
    cin>>FLname;
    cout<<"Enter your name"<<endl;
    cin>>Yname;
    cout<<"Enter a food"<<endl;
    cin>>food;
    cout<<"Enter a number between 100-120"<<endl;
    cin>>num;
    cout<<"Enter an adjective"<<endl;
    cin>>adjec;
    cout<<"Enter a color"<<endl;
    cin>>color;
    cout<<"Enter an animal"<<endl;
    cin>>animal;
    //Output the story
    cout<<"Dear Instructor "<<FLname<<","<<endl;
    cout<<"I am sorry that i am unable to turn in my homework at this time. "
            <<"First, i ate a rotten "<<food<<","<<"which make me turn "<<color
            <<"and extremely ill. I came down with a fever of "<<num
            <<"."<<"Next, my "<<adjec<<" pet "<<animal<<" must have smelled the remains of the "
            <<food <<"on my homework, because he ate it. i am currently rewriting my homework "
            <<"and hope you will accept it late."<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<Yname<<endl;
    return 0;
}

