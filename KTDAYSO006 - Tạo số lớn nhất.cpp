#include<bits/stdc++.h>
using namespace std;
bool cmp (string a, string b) {
    return a>b;
}
void solve() {
    int n; cin>>n;
    int a[n];
    for(int i = 0; i<n; i++) {
        cin>>a[i];
    }
    vector<string> v;
    for(int i = 0; i<n; i++) {
        string s = to_string(a[i]);
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);
    for(string c : v) {
        cout<<c;
    }
    cout<<endl;
}
int main() {
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}