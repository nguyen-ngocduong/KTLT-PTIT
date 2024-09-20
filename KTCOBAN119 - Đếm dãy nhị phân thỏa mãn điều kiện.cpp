#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n,k;
        cin>>n>>k;
        long long output = 0;
        for(int i = 0; i<= n; i++) {
            int tmp = i;
            int count = 0;
            while(tmp > 0) {
                if(tmp%2==0) count++;
                tmp /= 2;
            }
            if(count == k) output++;
        }
        cout<<output<<endl;
    }
    return 0;
}