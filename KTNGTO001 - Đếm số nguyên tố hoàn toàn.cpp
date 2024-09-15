#include<bits/stdc++.h>
using namespace std;
bool checkdigits(long long n) {
    while(n) {
        int du = n%10;
        if(du != 2 && du!=3 && du!=5 && du!=7) return false;
        n/=10;
    }
    return true;
}
bool isPrime(long long n){
    if(n<=1) return false;
    for(int i = 2; i*i<= n ; i++) {
        if(n%i==0) return false;
    }
    return true;
}
int isfullPrime(long long n) {
    return (checkdigits(n) && isPrime(n));
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n; cin>>n;
        int count = 0;
        for(int i = 2; i<=n; i++) {
            if(isfullPrime(i)) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}