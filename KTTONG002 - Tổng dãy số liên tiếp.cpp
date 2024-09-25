#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long l,r;
        cin>>l>>r;
        long long tong = (l+r)*(l-r+1)/2;
        cout<<tong<<endl;
    }
    return 0;
}