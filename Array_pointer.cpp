#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int *p = arr;
    //  This 2 line print addres of arr.
    cout << arr << endl;
    //  cout<<p<<endl;
    for (int i = 0; i < n; i++)
    {
        // This will print value at *p(Element of Arr)
        cout << *p++ << endl;
    }
    cout << endl;
    for(int i=0;i<n;i++){
        //This will print value of Arr 
        cout<<*(arr+i)<<" ";
    }
    return 0;
}