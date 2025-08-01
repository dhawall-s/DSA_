#include<iostream>
using namespace std;

int countno(long long int n){
   long long  int count=0;
   long long  int digit;
    while(n != 0){
        digit =n %10;
        n=n/10;
        count++;
    }
    cout<<count;
    return 0;

}

int main(){
    int n;
    cin>>n;
    countno(n);
}