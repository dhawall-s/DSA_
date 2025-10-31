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
    cout << "Value before increment " << num2 << endl;
    (*np)++;
    cout << "Value after increment " << num2 << endl;
    int *q = np;
    // cout<<"Value of np is"<<np<<endl;
    cout << "Value of &np is" << &num2 << endl;
    cout << "Value of q is " << q << endl;

    int i = 4;
    int *t = &i;
    *t = *t + 1;
    cout << i << endl;
    cout << *t << endl;
    cout << t << endl;
    t = t + 1; // address 4 byte aage hoga 
    cout << t << endl;
    return 0;
}