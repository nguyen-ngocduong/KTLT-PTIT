#include<bits/stdc++.h>
using namespace std;
long long tong_uoc_so(long long n) {
    long long sum = 1;
    for(int i = 2; i*i <= n; i++) {
        if(n%i == 0) {
            if(n / i == i) {
                sum += i;
            }
            else sum += i + n/i;
        }
    }
    return sum;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long a,b;
        cin >> a >> b;
        if(tong_uoc_so(a) == b && tong_uoc_so(b) == a) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}