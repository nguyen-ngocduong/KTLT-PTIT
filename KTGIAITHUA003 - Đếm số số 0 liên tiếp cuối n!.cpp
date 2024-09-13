#include<bits/stdc++.h>
using namespace std;
int dem (long long n) {
    int count = 0;
    for(int i = 5; i<= n ;i*= 5) {
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