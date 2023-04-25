#include<iostream>
using namespace std;
bool iseven (int n){
    if(n%2==0){
        return 1;
    }
        return 0;
}
int main(){
    int n;
    cout<<"Enter a number:-";
    cin>>n;
   cout<<(iseven(n)?"Even":"odd");
    return 0;
}