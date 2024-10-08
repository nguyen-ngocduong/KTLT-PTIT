#include<bits/stdc++.h>
using namespace std;
int fibo[43];
void khoitao() {
    fibo[0] = 1;
    fibo[1] = 2;
    for(int i = 2; i<= 42; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}
int solve(int n, int k, int index) {
    if(k == 0) return n==0;
    int sum = 0;
    for(int i = index; i >= 0 && fibo[i] * k >= n; i--) {
        if(fibo[i] > n) continue;
        sum += solve(n-fibo[i], k-1, i);
    }
    return sum;
}
int main () {
    khoitao();
    int tc; cin>>tc; 
    while(tc--) {
        int n,k;
        cin>>n>>k;
        cout << solve(n,k,42) <<endl;
    }
    return 0;
}