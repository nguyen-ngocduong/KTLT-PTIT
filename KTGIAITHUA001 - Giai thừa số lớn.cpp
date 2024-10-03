#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
    int i, j, n, so;
    unsigned long long sl;
    unsigned long long sn;
    int a[MAX];
 
    cin >> n;


    a[0] = 1;
    so = 1;
    
    for (i = 1; i <= n; ++i) {
        sn = 0;
        for (j = 0; j < so; ++j) {
            sl = i * a[j] + sn;
            a[j] = sl % 10000;  
            sn = sl / 10000;   
        }
        if (sn > 0) {
            a[so++] = sn;
        }
    }
    
    cout << a[so - 1];
    for (i = so - 2; i >= 0; --i) {
        cout << setw(4) << setfill('0') << a[i];
    }
    cout << '\n';

}
    return 0;
}