#include<iostream>
using namespace std;
int main (){
    int Year;
    cout<<"Enter a year : ";
    cin>>Year;
    (Year%4==0)?cout<<"Leap Year ":cout<<"Non leap Year";
    return 0;
}