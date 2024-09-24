#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n,k; cin>>n>>k;
    long long mang[k+1][n+1];
    mang[1][0] = 0;
    for(int i = 1; i<=n; i++) {
        mang[1][i] = 1; //tất cả phần còn lại của dòng 1 bằng 1 phần còn lại của mảng bằng 0
    }
    for(int i = 2; i<=k; i++) {
        for(int j = 0; j<=n; j++) {
            long long sum =0;
            for(int k = 0; k<j; k++) {
                sum += mang[i-1][k];
            }
            mang[i][j] = sum;
        }
    }
    cout<<mang[k][n]<<endl; // in ra phần tử cuối trong mảng
}
int main() {
    int tc; cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}