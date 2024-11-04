#include<bits/stdc++.h>
using namespace std;
int n,k;
#define MOD 1000000007
struct matrix {
    long long f[100][100];
};

matrix operator*(matrix a,matrix b){
    matrix res;
    for(int i = 0 ;i<n;i++){
        for(int j = 0; j<n; j++){
            res.f[i][j] = 0;
            for(int k = 0; k<n; k++){
                res.f[i][j] += (a.f[i][k] * b.f[k][j]) % MOD;
                res.f[i][j] %= MOD;
            }
        }
    }
    return res;
}

matrix PowMod(matrix a, int k){
    if(k==1) return a;
    matrix tmp = PowMod(a, k/2);
    if(k%2==0) return tmp*tmp;
    return tmp*tmp*a;
}

int main() {
    int tc; cin>>tc;
    while(tc--) {
        cin >> n >> k;
        matrix a;
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<n; j++){
                cin >> a.f[i][j];
            }
        }
        matrix b = PowMod(a,k);
        long long sum = 0;
        for(int i = 0 ;i < n; i++) {
            sum += b.f[i][n-1-i];
            sum %= MOD;
        }
        cout << sum << endl;
    }
    return 0;
}