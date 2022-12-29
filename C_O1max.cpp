#include<iostream>
using namespace std;
int main (){
    int n1,n2,n3;
    cout<<"Enter three number : ";
    cin>>n1>>n2>>n3;
    int max;
    max=(n1>n2 and n2>n3)?n1:(n2>n3)?n2:n3;
    cout<<"Maximum "<<max;
    return 0;
}