#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ptu 100001
int main () {
    int tc; cin>>tc;
    while(tc--) {
        int n; cin>>n;
        int mang[ptu];
        memset(mang, 0, sizeof(mang)); // reset ptu trong mảng bằng 0
        mang[0] = 1; // cập nhật mang[0] = 1;
        for(int i = 1; i<=n; i++) {
            for(int j = i; j<=n; j++) {
                mang[j] = (mang[j] + mang[j-i]) % MOD;
            }
        }
        cout << mang[n] % MOD -1 <<endl;
    }
    return 0;
}