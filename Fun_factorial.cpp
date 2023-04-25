#include<iostream>
using namespace std;
int fact (int num ){
    int ans =1;
    for(int i=1;i<=num;i++){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int n;
   cout<<"Enter a number:-";
    cin>>n;
    cout<<"The factorial of"<<" "<< n<<" " <<"is:-"<<fact(n);
    return 0;
}