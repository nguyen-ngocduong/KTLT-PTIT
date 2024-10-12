#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin >>tc;
    while(tc--) {
        int n; float x;
        cin >> n >> x;
        float sum = 0, tmp = 1.0, k = 1;
        for(int i = 1; i<= n; i++) {
            tmp *= x;
            k *= i;
            sum += tmp / k;
        }
        cout << fixed << setprecision(3) << sum << endl;
    }
    return 0;
}