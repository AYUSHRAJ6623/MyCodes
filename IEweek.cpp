#include<iostream>
using namespace std;
int main (){
    int week ;
    cout<<"Enter week number : ";
    cin>>week;
   if(week==1){
    cout<<"MONDAY";
   }
   else if(week==2){
    cout<<"TUESDAY";
   }
   else if(week==3){
    cout<<"WEDNESDAY";
   }
   else if(week==4){
    cout<<"THURSDAY";
   }
   else if(week==5){
    cout<<"FRIDAY";
   }
   else if(week==6){
    cout<<"SATURDAY";
   }
   else{
    cout<<"SUNDAY";
   }
    return 0;
}