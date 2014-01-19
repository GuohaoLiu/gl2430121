

/*
  Guohao Liu
  January 14th, 2014
  Inflation, effects of
*/
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//Global Constants
const float CNV_PERC=100;
//Function Prototypes


//Execution Begins Here!


int main(){
   //Declare Variables
   float price,infltn,numyr,numb=0;
   int n=2;
   while (n>1){
   //Input price and number of year
   cout<<"Input the starting price "
      <<"of an item in $"<<endl;
   cin>>price;
   cout<<"Input the number of years "<<endl;
   cin>>numyr;
   cout<<"Input the inflation rate "
           <<"over time in %"<<endl;
   cin>>infltn;
   infltn/=CNV_PERC;

   //Output the price
   
   numb=1;
   while (numb<=(numyr-1)){
       cout<<setprecision(2);
         cout<<fixed;
         cout<<showpoint;
         price*=(1+infltn);
   cout<<"The price of the item after "
      <<static_cast<int>(numb)<<" year = $"
        <<price<<endl;
   numb++;
   }
   }
  
//Exit Stage Right
    return 0;
}
