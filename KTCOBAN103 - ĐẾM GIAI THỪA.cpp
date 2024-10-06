#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n; cin>>n;
        long long sum = 0;
        vector<long long> v;
        for(long long  i = 1; ceil(sum) <= n; i++) {
            sum += log10(i);
            if(ceil(sum) == n) {
                v.push_back(i);
            }
        }
        if(v.empty()) cout<<"NO"<<endl;
        else {
            cout<<v.size()<<" ";
            for(int i : v) {
                cout<<i<<" ";
            }
            cout << endl;
        }
    }
    return 0;
}