// #include<bits/stdc++.h>
// using namespace std;
// int tong_chu_so(long long n){
//     int digits = 0;
//     int sum = 0;
//     long long x = n;
//     while(n>0) {
//         n/=10;
//         digits++;
//     }
//     n = x; //khôi phuvj lại n
//     while(n>0) {
//         int du = n%10;
//         sum += pow(du,digits);
//         n /= 10;
//     }
//     return sum ;
// }
// int main() {
//     int t; // Số lượng bộ test
//     cin >> t;
//     while (t--) {
//         long long a;
//         cin >> a;
//         if (tong_chu_so(a) == a) {
//             cout << 1 << endl; // Là số Armstrong
//         } else {
//             cout << 0 << endl; // Không phải số Armstrong
//         }
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin >> tc;
    while(tc--) {
        string s; cin >> s;
        int n = s.length();
        long long num = stoi(s);
        long long sum = 0;
        for(int i = 0; i<n; i++) {
            int tmp = s[i] - '0';
            sum += pow(tmp, n);
        }
        if(sum == num) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}