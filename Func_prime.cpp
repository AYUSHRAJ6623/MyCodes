#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return 0;
        }
    }
      return 1;

}
int main(){
    int n;
    cout<<"Enter a number :-";
    cin>>n;
    cout<<(isprime(n)?"PRIME":"NON-PRIME");

    return 0;
}