#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int digit;
    int pro=1;
    while(num>0){
        digit=num%10;
        num=num/10;
        cout<<digit<<endl;
        pro=pro*digit;
    }
        cout<<"Product of number is : "<<pro;
    return 0;
}