#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long l,r; cin>>l>>r;
        long long a = (long long)sqrt(l);
        long long b = (long long)sqrt(r);
        if(a*a >=l) l = a;
        else l = a+1;
        if(b*b > r) r = b - 1;
        else r = b;
        cout<<r-l+1<<endl;
    }
    return 0;
}