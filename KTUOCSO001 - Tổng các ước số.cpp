#include<bits/stdc++.h>
using namespace std;
long long tong_uoc_so(long long n) {
    long long sum = 1;
    if(n==1) return 0;
    for(int i = 2; i<= sqrt(n); i++) {
        if(n%i==0) {
            if(i*i != n) {
                sum += i+n/i;
            }
            else sum += i;
        }
    }
    return sum;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n; cin>>n;
        cout<<tong_uoc_so(n)<<endl;
    }
    return 0;
}