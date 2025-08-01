#include<iostream>
using namespace std;

int sumofdig(int n){
    int s=0;
    while(n != 0){
    int digit=n%10;
    s=s+digit;
    n=n/10;
    }
    return s;
    
}
int main(){
    int n;
    cin >> n;
    cout<<sumofdig(n);
}