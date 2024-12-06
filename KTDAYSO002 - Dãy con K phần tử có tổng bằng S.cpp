#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int a[25];
int X[100];
long long output;
void count(){
    long long sum = 0;
    for(int i = 1; i<=k; i++){
        sum += a[X[i] - 1];
    }
    if(sum == s) output++;
}
void Try(int i){
    for(int j = X[i-1]+1; j<=n-k+i; j++){
        X[i] = j;
        if(i == k) count();
        else Try(i+1);
    }
}

void solve() {
    cin >> n >> k >> s;
    output = 0;
    X[0] = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    Try(1);
    cout << output << endl;
}

int main (){
    int tc; cin >> tc;
    while(tc--) solve();
    return 0;
}