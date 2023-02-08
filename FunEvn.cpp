#include<iostream>
using namespace std;
    bool isEven(int num){
        if(num%2==0){
            return true;
        }
        else {
         return false;
        }
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<(isEven(n)?"Even":"Odd");
    return 0;
}