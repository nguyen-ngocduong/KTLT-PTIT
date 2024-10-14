#include<bits/stdc++.h>
using namespace std;
#define e -9999
int a[101][101];

int main () {
    int tc; cin>>tc;
    while(tc--) {
        int m,n;
        cin >> m >> n; // m hàng n cột
        for(int i = 0; i<=n; i++) { // tạo biên cho ma trận
            a[0][i] = e;
            a[m+1][i] = e;
        }
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j<= n; j++) {
                cin >> a[i][j];
            }
        }
        for(int j = 2; j<=n; j++) {
            for(int i = 1; i<=m; i++) {
                a[i][j] += max(a[i-1][j-1], max(a[i][j-1],a[i+1][j-1]));
            }
        }
        int res = e;
        for(int i = 1; i<=m; i++) {
            res = max(res, a[i][n]);
        }
        cout << res <<endl;
    }
    return 0;
}