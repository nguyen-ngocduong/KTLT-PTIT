#include<bits/stdc++.h>
using namespace std;
long long a[5000001];
void max_uoc() {
    for(int i = 2;i <= 5000000; i++) {
        int n = i;
        vector<long long> vt;
        while(n%2==0) {
            vt.push_back(2);
            n /= 2;
        }
        while(n%3==0) {
            vt.push_back(3);
            n /= 3;
        }
        for(int i = 5; i<= sqrt(n); i+=6) {
            while(n%i == 0) {
                vt.push_back(i);
                n /= i;
            }
            while(n%(i+2)==0) {
                vt.push_back(i+2);
                n /= (i+2);
            }
        }
        if(n) vt.push_back(n);
        sort(vt.begin(), vt.end());
        a[i] = a[i-1] + vt[vt.size() - 1];
    }
}
int main () {
    max_uoc();
    int tc;cin>>tc;
    while(tc--) {
        long long n; cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
} 