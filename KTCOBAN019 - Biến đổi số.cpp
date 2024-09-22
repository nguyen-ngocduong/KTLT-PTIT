#include<bits/stdc++.h>
using namespace std;
long long solve( long long n) {
    if(n<=1) return 1;
    long long x = sqrt(n);
    long long a = n%2 + solve(n/2);
    long long b = n%3 + solve(n/3);
    long long c = n - x*x + solve(x);
    long long result = 1+min(b, min(a,c));
    return result;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n;
        cin>>n;
        cout<< solve(n) <<endl;
    }
    return 0;
}