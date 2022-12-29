// Distance.
#include<iostream>
#include<cmath>
using namespace std;
int main (){
    float Centimeter;
    cout<<"Enter length in centimeter : ";
    cin>>Centimeter;
    float Meter,Kilometer;
    Meter=Centimeter/100;
    Kilometer=Meter/1000;
    cout<<"Length in meter "<<Meter<<endl;
    cout<<"Length in Kilometer "<<Kilometer<<endl;
    return 0;
}
