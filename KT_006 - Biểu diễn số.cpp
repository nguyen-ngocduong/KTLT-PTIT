#include<bits/stdc++.h>
using namespace std;
int solve()
{
    int n,m; cin>>n>>m;
    vector<int> a(n+1,0);
    a[0] = 1;
    vector<int> powers;
    int power = 1;
    while(power <= n) {
        powers.push_back(power);
        power *= m;
    }
    for(int i = 0; i<powers.size(); i++) {
        for(int j = powers[i]; j<=n; j++) {
            a[j] += a[j-powers[i]];
        }
    }
    cout << a[n] << endl;
}
int main()
{
    int tc; cin>>tc;
    while(tc--) solve();
    return 0;
}