#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;
 ll c[32],n,t;
 int main () {
    cin>>t;
    c[0] = 1, c[1] = 1;
    for(int i = 1; i<=30; i++) {
        for(int j = 0; j<=i ; j++) {
            c[i+1] += c[j]*c[i-j];
        }
    }
    while(t--) {
        cin>>n;
        cout<<c[n]<<endl;
    }
    return 0;
 }