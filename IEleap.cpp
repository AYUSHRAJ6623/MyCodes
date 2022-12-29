#include<iostream>
using namespace std;
int main (){
    int Year;
    cout<<"Enter Year : ";
    cin>>Year;
    if(Year%4==0){
        cout<<"Leap year";
    }
    else {
        cout<<"Non leap year";
    }
    return 0;
}