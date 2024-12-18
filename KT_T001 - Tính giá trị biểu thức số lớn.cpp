#include<bits/stdc++.h>
using namespace std;
long long a[10001];
string s[10001];
void khoitao() {
    int m = 1, nho = 0; a[0] = 1;
    for(int i = 1; i <= 1000; i++) {
        for(int j = 0; j < m; j++) {
            int so = a[j] * i * 2 + nho;
            a[j] = so % 10;
            nho = so / 10;
        }
        while(nho > 0) {
            a[m++] = nho % 10;
            nho /= 10;
        }
        for(int j = m-1; j >= 0; j--) {
            s[i] += a[j] + '0';
        }
    }
}
int main () {
    khoitao();
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        if(n==0) cout << 1 << endl;
        else cout << s[n] << endl;
    }
    return 0;
}