#include<bits/stdc++.h>
using namespace std;
long long dp[101][101], a[101][101],x,y,m,n;
int main(){
    int tc; cin >> tc;
    while(tc--){
        cin >> m >> n;
        for(int i = 1;i<=m;i++){
            for(int j = 1;j<=n;j++){
                cin >> a[i][j];
            }
        }
        cin>>x>>y;//nhập điểm xuất phát
        for(int i = 1;i<n;i++){
            dp[0][i] = dp[m+1][i] = INT_MAX;
        }
        for(int i = 1;i<=m;i++){
            if(i!=x) a[i][y] = INT_MAX;
            dp[i][y] = a[i][y];
        }
        for(int j = y+1; j<=n;j++){
            for(int i = 1;i<=m;i++){
                dp[i][j] = min(dp[i-1][j-1], min(dp[i][j-1],dp[i+1][j-1])) + a[i][j];
            }
        }
        long long res = INT_MAX;
        for(int i = 1;i<=m;i++){
            res = min(res, dp[i][n]);
        }
        cout<<res<<endl;
    }
    return 0;
}