#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        int n; cin>>n;
        int a[n];
        for(int i = 0; i<n; i++) {
            cin >> a[i];
        }
        vector<int> v(n,1);// v[i] sẽ lưu độ dài dãy tăng dần kết thúc tại chỉ số i
        int res = 0;
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<i; j++) { // v[j] đứng trước v[i]
                if(a[i] > a[j]) {
                    v[i] = max(v[i], v[j] + 1);
                }
            }
            res = max(res, v[i]);
        }
        cout << res <<endl;
    }
    return 0;
}