#include<bits/stdc++.h>
using namespace std;
int a[13] = {1,0,0,2,10,4,40,92,352,724,2680,14200};
int main () {
    int tc; cin>>tc;
    while(tc--) {
        int n;
        cin >> n;
        cout << a[n-1] << endl;
    }
    return 0;
}