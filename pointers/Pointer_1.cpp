#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    num = num + 1;
    int *ptr = &num; // p is a pointer to int
    (*ptr)++;
    cout << "Num is:" << num << endl;
    cout << "*ptr is:" << *ptr << endl; // value at address of num
    cout << "ptr is:" << ptr << endl;   // value of address of num
    cout << "&num is:" << &num << endl; // address of num
    char ch = 'D';
    char *p = &ch;
    cout << "ch is:" << ch << endl;
    cout << "*p is " << *p << endl;
    cout << "p is :" << p << endl;
    double d = 4.5050;
    double *pd = &d;
    cout << "d is:" << d << endl;
    cout << "*p is " << *pd << endl;
    cout << "p is :" << pd << endl;
    cout << "&d is :" << &d << endl;
    cout << "Size of pointer is :" << sizeof(*pd) << endl;
    cout << "Size of double is :" << sizeof(d) << endl;

    int *np = 0;
    int num2 = 5;
    np = &num2;
    // cout<<"Null pointer with 0"<<endl;
    cout << "Value of *np is :" << *np << endl;
    cout << "Value of num2  is :" << num2 << endl;
    cout << "Value of np is :" << np << endl;
    cout << "Value of &np is :" << &num2 << endl;

    return 0;
}