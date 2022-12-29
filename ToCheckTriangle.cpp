// To check it is valid Triangle or not.
#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"Enter the sides of Triangle :";
    cin>>a>>b>>c;
    if(a+b>c and b+c>a and c+a>b){
        cout<<"It is a valid triangle"<<endl;
        if(a==b and b==c){
            cout<<"It is an equilateral triangle"<<endl;
        }
        else if (a==b || b==c || c==a){
            cout<<"It is isosceles triangle"<<endl;
        }
        else {
            cout<<"It is scalen triangle"<<endl;
        }
    }
    else{
        cout<<"It is not valid triangle"<<endl;
    }
    return 0;

}