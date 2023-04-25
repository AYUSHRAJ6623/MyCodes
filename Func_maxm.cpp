#include<iostream>
using namespace std;
int maxm(int a, int b){
    if(a>b)
        return a;
    else
    return b;
}
int main(){
    int a;
    int b;
    cout<<"Enter a value of a and b:-";
    cin>>a>>b;
    int maxm=max (a,b);
    cout<<maxm<<endl;
    return 0;
}                                             