#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << arr << endl;
    int *p = arr;
    cout << p<< endl;
    return 0;
}