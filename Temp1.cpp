//Fahrenheit to Celsius...
#include<iostream>
using namespace std;
int main (){
    int Fahr;
    cout<<"Enter temperature in fahrenheit : ";
    cin>>Fahr;
    float celsius;
    celsius=1.0*((Fahr-32)*5)/9;
    cout<<"Temperature in Celsius "<<celsius<<endl;
    return 0;
}