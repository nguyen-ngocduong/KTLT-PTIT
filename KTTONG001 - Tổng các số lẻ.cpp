#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        int l,r; cin>>l>>r;
        long n = (r-l)/2;
        long long sum = ((n+1)*(r+l))/2;
        cout<<sum<<endl;
    }
    return 0;
}