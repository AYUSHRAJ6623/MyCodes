#include<iostream>
using namespace std;
int factorial(int num){
    if(num==0){
        return 1;
    }
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<factorial(n);
    return 0;
}