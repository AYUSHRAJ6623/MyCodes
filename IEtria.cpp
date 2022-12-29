#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"Enter 3 sides of triangle";
    cin>>a>>b>>c;
    if(a+b>c and b+c>a and c+a>b){
        cout<<"Valid";
    }
    else {
        cout<<"Not valid";
    }
    return 0;
}