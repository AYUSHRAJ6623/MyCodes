#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int i=1;
    int mul;
    while(i<=10){
        mul=i*num;
        cout<<mul<<endl;
        i++;

    }
    return 0;
}