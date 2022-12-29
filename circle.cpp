//circle.
#include<iostream>
#include<cmath>
using namespace std;
int main (){
    int Radius;
    cout<<"Enter radius of circle :";
    cin>>Radius;
    int Diameter;
    float Area , Circumference;
    Diameter=2*(Radius);
    Circumference= Diameter*(M_PI);
    Area=(2*(M_PI)*Radius*Radius);
    cout<<"Diameter "<<Diameter<<endl;
    cout<<"Circumference "<<Circumference<<endl;
    cout<<"Area "<<Area<<endl; 
    return 0;
}