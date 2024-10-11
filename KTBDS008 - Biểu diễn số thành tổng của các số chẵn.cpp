#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long POW(long long a, long long b) {
    long long res = 1;
    while(b>0) {
        if(b%2==1) {
            res = (res*a) % MOD;
        }
        a = (a*a) % MOD;
        b /= 2;
    }
    return res;
}
long long BDS(long long n) {
    return POW(2, n/2 - 1);
}
int main () {
    int tc; cin >> tc;
    while(tc--) {
        long long n; cin >> n;
        if(n%2 == 1) cout << -1 << endl;
        else cout << BDS(n) << endl;
    }
    return 0;
}