#include<iostream>
using namespace std;
int rev(int n){
    int reverse=0;
    while(n !=0 ){
        int digit= n%10;
        reverse=reverse * 10 +digit;
        n=n/10;
    }
    cout<<reverse;
    return 0;
}
int main(){
    int num;
    cin>>num;

    rev(num);
}