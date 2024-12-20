#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        int n; cin >> n;
        float x; cin >> x;
        float sum = 0, tmp = 1;
        for(int i = 1; i <= n; i++) {
            tmp *= x;
            sum = sqrt(sum + tmp);
        }
        cout << fixed << setprecision(3) << sum << endl;
    }
    return 0;
}