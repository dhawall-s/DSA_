#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << arr << endl; // address of first memory block is 1st addresss of array initialisation
    cout << &arr[0] << endl;
    cout << "Value will print at arr[0]:" << arr[0] << endl;
    cout << &arr[1] << endl;
    cout << "size of arr[0] : " << sizeof(arr[0]) << endl;
    cout << *arr + 10 << endl;  // First location mein 1 add hoga
    cout << *(arr + 1) << endl; // Second Location Print Karega
    // arr[i]=*(arr+i)
    // i[arr]=*(i+arr) //these both are same
    int i = 3;
    cout << i[arr] << endl;
    cout<<&arr[1];

    

    return 0;
}