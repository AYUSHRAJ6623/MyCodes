#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
   for(int i=2;i<=num;i++){
        if(num%i==0){
            cout<<i<<endl;
        }
      
   }
    return 0;
}