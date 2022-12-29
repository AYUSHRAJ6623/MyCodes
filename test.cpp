//
#include<iostream>
using namespace std;
int main (){
char ch;
cout<<"Enter character : ";
cin>>ch;
if(ch== 'A' || ch== 'E' || ch== 'I' || ch== 'O' || ch== 'u'){
    cout<<"It is vowels";
}
else {
    cout<<"It is consonant";
}

    return 0;
}