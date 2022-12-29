// To check year is leap or not.
#include<iostream>
using namespace std;
int main (){
    int Year;
    cout<<"Enter the year :-";
    cin>>Year;
    if (Year%4==0){
        cout<<"It is a leap year";
    }
    else {
        cout<<"It is not leap year";
    }
    return 0;
}
