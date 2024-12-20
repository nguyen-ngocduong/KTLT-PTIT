#include<bits/stdc++.h>
using namespace std;
long long max_uoc(long long n) {
    vector<long long> v;
    while(n%2 == 0) {
        v.push_back(2);
        n /= 2;
    }
    while(n%3 == 0) {
        v.push_back(3);
        n /= 3;
    }
    for(int i = 5; i<=sqrt(n); i+= 6) {
        while(n%i == 0) {
            v.push_back(i);
            n /= i;
        }
        while(n%(i+2) == 0) {
            v.push_back(i+2);
            n /= (i+2);
        }
    }
    if(n) v.push_back(n);
    sort(v.begin(), v.end());
    return v[v.size() - 1];
}
int main () {
    int tc; cin >> tc;
    while(tc--) {
        long long n; cin >> n;
        cout << max_uoc(n) << endl;
    }
    return 0;
}