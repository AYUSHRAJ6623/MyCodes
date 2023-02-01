#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int temp=num;
    int rev,digit;
   while(temp>0){
    digit=temp%10;
    rev=rev*10+digit;
    temp=temp/10;
  }    
  if(rev==num){
    cout<<"Palindrome";
  }
  else {
    cout<<"Non palindrome";
  }
    return 0;
}