#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
struct matrix{
    long long c[2][2]; // khoi tao 1 ma tran 2x2
    matrix() {
        c[0][0] = 0;
        c[0][1] = c[1][0] = c[1][1] = 1;
    }
};
matrix operator*(matrix a, matrix b){ // ham nhan hai ma tran
    matrix res;
    for(int i = 0; i<=1; i++) {
        for(int j = 0; j<=1; j++) {
            res.c[i][j] = 0; // tao ma tran res toan 0
            for(int k = 0; k<=1; k++) {
                res.c[i][j] = (res.c[i][j] + a.c[i][k] * b.c[k][j]) % MOD;
            }
        }
    }
    return res;
}

matrix luythua(matrix a, long long n) {
    if(n==1) return a;
    if(n%2==1) return luythua(a,n-1)*a;
    matrix tmp = luythua(a,n/2);
    return tmp*tmp;
}

int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n; cin>>n;
        matrix a;
        a = luythua(a,n+1);
        cout << a.c[0][1] << endl;
    }
    return 0;
}