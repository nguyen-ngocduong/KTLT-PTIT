#include<bits/stdc++.h>
using namespace std;
long long fibo[92];
void khoitao() {
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i<92; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}
bool check(long long n) {
    for(int i = 0; i< 92; i++) {
        if(fibo[i] == n) return true;
    }
    return false;
}
void solve() {
    long long n; cin>>n;
    for(int i = 91; i>=0; i--){
        if(fibo[i] > n) continue;
        else {
            if(check(n-fibo[i])) {
                cout<<n-fibo[i]<<" "<<fibo[i]<<endl;
                return;
            }
        }
    }
    cout << "-1" <<endl;
}
int main () {
    khoitao();
    int tc; cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}