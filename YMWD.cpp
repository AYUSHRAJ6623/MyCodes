#include<iostream>
using namespace std;
int main(){
   int Days;
   cout<<"Enter the numbers of days : ";
   cin>>Days;
   int year;
   year = Days/365;
   int week= (Days - (year*365))/7;
   int days=((year*365)+(week*7));
   cout<<year<<endl;
   cout<<week<<endl;
   cout<<days<<endl;
    return 0;
}