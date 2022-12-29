//Rectangle.
#include<iostream>
using namespace std;
int main (){
    int L,B;
    cout<<"Enter length and breadth of rectangle : ";
    cin>>L>>B;
    int Area,Perimeter;
    Area=(L*B);
    Perimeter=2*(L+B);
    cout<<"Area "<<Area<<endl;
    cout<<"Perimeter "<<Perimeter<<endl;
    return 0;
}