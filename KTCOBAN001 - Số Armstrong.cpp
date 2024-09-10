#include<bits/stdc++.h>
using namespace std;
int tong_chu_so(long long n){
    int digits = 0;
    int sum = 0;
    long long x = n;
    while(n>0) {
        n/=10;
        digits++;
    }
    n = x; //khôi phuvj lại n
    while(n>0) {
        int du = n%10;
        sum += pow(du,digits);
        n /= 10;
    }
    return sum ;
}
int main() {
    int t; // Số lượng bộ test
    cin >> t;
    while (t--) {
        long long a;
        cin >> a;
        if (tong_chu_so(a) == a) {
            cout << 1 << endl; // Là số Armstrong
        } else {
            cout << 0 << endl; // Không phải số Armstrong
        }
    }
    return 0;
}