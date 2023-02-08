#include<iostream>
using namespace std;
    void printnum(int num){
        for(int i=1;i<=num;i++){
            cout<<i<<" ";
        }
    }

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    printnum(n);
    return 0;
}