#include<iostream>
using namespace std;
int main (){
    int num1,num2;
    cout<<"Enter two number : ";
    cin>>num1>>num2;
    int max=(num1>num2)?num1:num2;
    cout<<"Maximun "<<max<<endl;
    return 0;
}