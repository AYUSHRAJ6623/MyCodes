//To check number is positive ,negative and zero .
#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num>0){
        cout<<"It is positive number ";
    }
    else if (num<0){
        cout<<"It is negative number";
    }
    else {
        cout<<"It is zero";
    } 
    return 0;
}