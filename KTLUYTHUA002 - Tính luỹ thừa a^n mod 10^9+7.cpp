#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long luy_thua(long long a, long long n) {
    long long output = 1;
    while(n) {
        if(n%2==1) {
            output = (output*a) % MOD;
        }
        a = (a*a)%MOD;
        n/=2;
    }
    return output;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long a,n;
        cin>>a>>n;
        cout<<luy_thua(a,n)<<endl;
    }
    return 0;
}