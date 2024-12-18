#include<bits/stdc++.h>
using namespace std;
long long dem (long long n) {
    long long count = 0;
    for(long long i = 5; i<= n ;i*= 5) {
        count += n/i;
    }
    return count;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n; cin>>n;
        cout<<dem(n)<<endl;
    }
    return 0;
}