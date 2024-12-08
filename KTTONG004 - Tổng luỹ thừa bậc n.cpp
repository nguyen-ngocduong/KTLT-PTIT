#include<bits/stdc++.h>
using namespace std;
int dem(long long m, long long n, long long k) {
    long long count = 0;
    if(m == 0) return 1;
    for(int i = k; pow(i,n) <= m; i++) {
        count += dem(m-pow(i,n),n,i+1);
    }
    return count;
}
int main(){
    int tc; cin >> tc;
    while(tc--) {
        long long m,n;
        cin >> m >> n ;
        cout << dem(m,n,1) << endl;
    }
    return 0;
}