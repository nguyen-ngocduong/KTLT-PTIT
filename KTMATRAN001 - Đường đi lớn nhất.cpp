#include<bits/stdc++.h>
using namespace std;
int a[101][101], dp[101][101];
int main(){
    int tc; cin>>tc;
    while(tc--) {
        int n,m; cin>>n>>m;
        for(int i = 1; i<=n; i++) for(int j = 1; j<=m; j++) cin>>a[i][j];
        for(int i = 1; i<=m; i++){
            dp[1][i] = a[1][i];
        }
        for(int i = 1; i<=n; i++){
            dp[i][0] = -1;
            dp[i][m+1] = -1;
        }
        for(int i = 1; i<= n; i++){
            for(int j = 1; j<=m; j++){
                dp[i][j] = max(dp[i-1][j-1], max(dp[i-1][j], dp[i-1][j+1])) + a[i][j];
            }
        }
        int res = 0;
        for(int i = 1; i<=m; i++){
            res = max(res, dp[n][i]);
        }
        cout<<res<<endl;
    }
    return 0;
}