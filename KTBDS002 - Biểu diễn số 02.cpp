#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n,k; cin>>n>>k;
    long long mang[k+1][n+1]; // tạo mảng để lưu trữ
    for(int i = 0; i<=n; i++) {
        mang[1][i] = 1; // khi k=0 thì chỉ có 1 cách phân chia duy nhất
    }
    for(int i = 2; i<=k ;i++) {
        long long sum = mang[i-1][0];
        mang[i][0] = mang[i-1][0];
        for(int j = 1; i<=n; j++) {
            sum += mang[i-1][j];
            mang[i][j] = sum;
        }
    }
    cout<<mang[k][n]<<endl;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}