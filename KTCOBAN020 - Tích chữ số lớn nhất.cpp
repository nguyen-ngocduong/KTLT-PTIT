#include<bits/stdc++.h>
using namespace std;
unsigned long long solve(unsigned long long n) {
    if(n == 0) return 1;
    if(n<=10) return n;
    return max(solve(n/10)*(n%10), solve(n/10 - 1)*9);
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        unsigned long long n; cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
} 