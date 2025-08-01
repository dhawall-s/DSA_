// #include<iostream>
// using namespace std;

// int prime(int n){
//     int count=0;
//     for(int i=1;i<=n;i++){
//         if( n%i == 0){
//             count++;
//         }
//     }
//     if(count>3){
//         cout<<"not prime";
//     }
//     else{
//         cout<<"prime";
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     prime(n);
// }



#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Prime numbers between 1 and " << N << " are:\n";
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
