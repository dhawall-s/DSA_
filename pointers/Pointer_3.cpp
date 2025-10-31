#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << &arr[0] << endl;
    cout << &arr << endl;
    cout << arr << endl;

    char ch[7] = "dhawal";
    cout << ch << endl;
    cout << &ch << endl;
    cout << &ch[0] << endl;

    char *c = &ch[0];
    cout << c << endl;
    cout << *c << endl;

    return 0;
}