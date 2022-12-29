#include<iostream>
using namespace std;
int main (){
   int a,b,c;
   cout<<"Enter 3 angles of triangle : ";
   cin>>a>>b>>c;
   int sum;
   if (a+b+c==180){
    cout<<"It is valid triangle";
   }
   else{
    cout<<"It is not valid triangle";
   }
    return 0;
}