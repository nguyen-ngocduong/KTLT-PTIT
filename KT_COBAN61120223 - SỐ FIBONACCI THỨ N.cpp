#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define run() int tc; cin>>tc; while(tc--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define FOR(i,l,r) for(int i = l; i<r; i++)
#define ll long long 

struct matran {
    long long f[2][2] = {
        {1,1},
        {1,0}
    };
};

matran operator*(matran a, matran b){
    matran res;
    FOR(i,0,2){
        FOR(j,0,2){
            res.f[i][j] = 0;
            FOR(k,0,2){
                res.f[i][j] += a.f[i][k]%mod * b.f[k][j]%mod;
                res.f[i][j] %= mod;
            }
        }
    }
    return res;
}

matran luythua(matran a, int k) {
    if(k==1) return a;
    matran res = luythua(a,k/2);
    if(k%2==0) return res * res;
    else return res * res * a;
}

int main () {
    faster();
    run() {
        int n; cin>>n;
        matran a;
        matran res = luythua(a,n);
        cout << res.f[1][0] << endl;
    }
    return 0;
}