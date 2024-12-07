#include<bits/stdc++.h>
using namespace std;
bool Prime(long long n) {
    if(n<=1) 
        return false;
    if(n<=3) 
        return true;
    if(n%2 == 0 || n%3 == 0) 
        return false;
    for(long long i = 5; i*i <= n; i++) {
        if(n%i==0|| n%(i+2)== 0) 
            return false;
    }
    return true;
}
long long isPrime(long long n){
    if(n<=1) 
        return 5;
    long long prime = n-1;
    bool check = false;
    while(!check) {
        prime++;
        if(Prime(prime) && Prime(prime-2)) 
            check = true;
    }
    return prime;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n;
        cin >> n;
        cout << isPrime(n) << endl;
    }
    return 0;
}