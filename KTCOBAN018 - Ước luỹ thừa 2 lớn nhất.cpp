#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n, output = 0, tmp =2;
        while(tmp<=n) {
            output+=n/tmp;
            tmp *= 2;
        }
        cout<<output<<endl;
    }
    return 0;
} 