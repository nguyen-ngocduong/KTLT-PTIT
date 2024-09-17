#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long StringtoNum(string a, long long mod) {
    long long res = 0;
    for(char c : a) {
        res = (res*10 + (c-'0')) %mod;
    }
    return res;
}
long long Power(long long a, long long b) {
    long long output = 1;
    while(b>0) {
        if(b%2==1) {
            output = (output*a) % MOD;
        }
        a = (a*a)%MOD;
        b /= 2;
    }
    return output;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        string a,b;
        cin>>a>>b;
        long long x = StringtoNum(a,MOD);
        long long n = StringtoNum(b,MOD-1);
        cout<<Power(x,n)<<endl;
    }
    return 0;
}