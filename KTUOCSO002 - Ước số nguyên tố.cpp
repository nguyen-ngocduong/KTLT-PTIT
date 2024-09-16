#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n) {
    if(n<2) return false;
    for(int i = 2; i<= sqrt(n); i++) {
        if(n%i==0) return false;
    }
    return true;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n; cin >> n;
        int count = 0;
        if(n<2) cout<<0<<endl;
        else if(isPrime(n)) cout<<1<<endl;
        else {
            for(int i = 2; i<= n/2; i++) {
                if(n%i==0 && isPrime(i)) count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}