// 
#include<bits/stdc++.h>
using namespace std;
long long a[92];
int n;
void khoitao() {
    a[1] = 1;a[2] = 2;
    for(int i = 3;i <= 91;i++) a[i] = a[i - 1] + a[i - 2];
}
void solve(int &count, int j, int check) {
    for(int i = j; i <= 91; i++) {
        check += a[i];
        if(check > n) break;
        if(check == n) count++;
        if(check < n) solve(count, i+1, check);
        check -= a[i];
    }
}
int main () {
    khoitao();
    int tc; cin>>tc;
    while(tc--) {
        cin>>n;
        int count = 0;
        solve(count, 1, 0);
        cout<<count<<endl;
    }
    return 0;
}