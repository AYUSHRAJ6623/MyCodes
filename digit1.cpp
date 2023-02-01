 #include<iostream>
 using namespace std;
 int main(){
     int num;
     cout<<"Enter a number : ";
     cin>>num;
     int digit;
     int sum=0;
     while(num>0){
        digit= num%10;
        num=num/10;
        cout<<digit;
       // cout<<endl;
         sum=sum+digit;
     }
       
        cout<<"Sum of digit : "<<sum;
       
     return 0;
 }