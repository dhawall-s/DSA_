#include<iostream>
using namespace std;

int largest(int a, int b, int c){
    if(a>b && a>c){
        cout<<"A is greatest";
    }
    else if(b>a && b>c){
        cout<<"B is greatest";
    }
    else{
        cout<<"C is greatest";
    }
    return 0;
}
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    largest(a,b,c);
    return 0;
}