//Profit loss check.
#include<iostream>
using namespace std;
int main (){
    int cp,sp;
    cout<<"Enter C.P and S.P of produts : ";
    cin>>cp>>sp;
    if(cp<sp){
        cout<<"Profit";
    }
    else if (cp==sp){
        cout<<"No profit and No loss";
    }
    else {
        cout<<"Loss";
    }
    return 0;
}