#include<bits/stdc++.h>
using namespace std;
void solve() {
    long long n,k,m;
    cin>>n>>k>>m;
    double p = k * (double)log10(n*1.0);
    double fp = p - (long long) p;
    double f = pow(10,fp);
    long long result = f * pow(10,m-1);
    cout << result << endl;
}
int main () {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}