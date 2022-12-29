//Celsius to Fahrenheit....
 #include<iostream> 
using namespace std;
int main(){
    int cels;
    cout<<"Enter temperature in celsius : ";
    cin>>cels;
    float Fahr;
    Fahr=((cels*9/5)+32);
    cout<<"Temperature in Fahrenheit "<<Fahr<<endl;
    return 0;
}