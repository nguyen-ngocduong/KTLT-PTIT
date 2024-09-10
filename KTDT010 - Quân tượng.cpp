#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        int n; cin>>n;
        if(n==0) return 0;
        else if (n<=2) cout<<n<<endl;
        else {
            cout<<2*(n-1)<<endl;
        }
    }
    return 0;
}