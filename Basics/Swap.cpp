#include<iostream>
using namespace std;

int swap(int a, int b){
    int temp;
    cout<<a<< "  " <<b <<endl;
    cout<<"after swapping"<<endl;
    temp=a;
    a=b;
    b=temp;
    cout << a<<"   " << b;
    return 0;
}

int main(){
    int a;
    int b;
    cin>>a ;
    cin>> b;
    swap(a,b);
}