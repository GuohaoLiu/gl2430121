/* 
 * File:   main.cpp
 * Author:Guohao Liu
 *
 * Created on January 18, 2014, 2:45 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here!

string Sign[] = {"0", "Capricorn", "Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius"};
int Dates[] = {0, 19, 18, 20, 19, 20, 21, 22, 22, 22, 22, 21, 21};

void displaySign(int aMonth, int aDay) {
   if (aMonth < 1 || aMonth > 12 || aDay < 1 || aDay > 31) 
       cout << "That is not a valid birthday..." << endl;
   else {
      if (aDay <= Dates[aMonth]) {
         cout << "Your sign is " << Sign[aMonth] << endl;
         if (aDay == Dates[aMonth]-1 || aDay == Dates[aMonth]) cout << "You are on the cusp, the next nearest sign is " << Sign[(aMonth == 12 ? 1 : aMonth+1)] << endl;
      }
      else {
         cout << "Your sign is " << Sign[aMonth+1] << endl;
         if (aDay == Dates[aMonth]+1 || aDay == Dates[aMonth]+2) cout << "You are on the cusp, the next nearest sign is " << Sign[aMonth] << endl;
      }
   }
}

int main() {
   int month, day;
   bool running = true;
   char cont;

   while (running) {
      cout << "Enter your birth month and day separated by a space...\n";
      cin >> month >> day;
      displaySign(month, day);
      cout << "Go again? (y/n)" << endl;
      cin >> cont;
      if (cont == 'n') running = false;
   }
   
   return 0;
}