#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        int n; float x;
        float tmp = 1, sum = 0, mau = 0;
        for(int i = 1; i<=n; i++) {
            tmp *= x;
            mau += i;
            sum += tmp / mau;
        }
        cout << fixed << setprecision(3) << (float)sum <<endl;
    }
    return 0;
}