#include<bits/stdc++.h>
using namespace std;
long long a[93];
void khoitao() {
    a[1] = 1;
    a[2] = 1;
    for(int i = 3; i <= 93; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }   
}
int main(){
    khoitao();
    int t; cin >> t;
    while(t--) {
        long long n,k; cin >> n >> k;
        while(1) {
            if(n == 1) {
                cout << "A" << endl;
                break;
            }
            else if(n == 2) {
                cout << "B" << endl;
                break;
            }
            if(k > a[n - 2]) {
                k -= a[n - 2];
                n--;
            }
            else {
                n -= 2;
            }
        }
    }
    return 0;
}