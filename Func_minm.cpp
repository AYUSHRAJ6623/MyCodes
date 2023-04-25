#include<iostream>
using namespace std;
int minm(int a, int b){
    if(a<b)
        return a;
    else
        return b;
}
int main(){
    int a,b;
    cout<<"Enter two number :-";
    cin>>a>>b;
    int minm=min (a,b);
    cout<<minm<<endl;
    return 0;
}