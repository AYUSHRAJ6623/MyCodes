// Maximum between two number. 1 3 5 6 14 18
#include<iostream>
using namespace std;
int main (){
    int num1 ,num2;
    cout<<"Enter two number : ";
    cin>>num1>>num2;
    if(num1>num2){
        cout<<"Num1 is maximum";
    }
    else {
        cout<<"Num2 is maximum";
    }
    return 0;
}