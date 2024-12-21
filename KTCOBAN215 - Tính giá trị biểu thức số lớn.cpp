// #include<bits/stdc++.h>
// using namespace std;
// void giai_thua(long long a[], long long n, long long k){
//     long long tich, r = 0, m = 1;
//     a[0] = 1;
//     for(int i = n-k+1; i<=n ;i++){
//         for(int j = 0; j<m; j++){
//             tich = a[j]*i + r; //tính tích theo công thức
//             a[j] = tich % 10000; //gán 4 ptu cuối vào mảng
//             r = tich / 10000; //xét tiếp đến phần tử tiếp theo
//         }
//         while(r>0) {
//             a[m] = r%10000;
//             r /= 10000;
//             m++; //lưu  tiếp 4 ptu khác vào trong mảng cho ptu tiếp theo
//         }
//     }
//     cout<<a[m-1]; //in ptu cuối trước
//     for(int i = m-2; i>=0; i--){
//         cout<<setw(4)<<setfill('0')<<a[i];
//     }
// }
// int main (){
//     int tc;cin>>tc;
//     while(tc--){
//         long long n,k;
//         cin>>n>>k;
//         long long a[10000];
//         giai_thua(a,n,k);
//         cout<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
string mul (string a, string b) {
    int a1 = a.size();
    int a2 = b.size();
    string res(a1+a2, '0');
    for(int i = a1-1; i>=0; i--) {
        int nho = 0;
        for(int j = a2-1; j >=0; j--) {
            int so = (a[i] - '0') * (b[j] - '0') + res[i+j+1] - '0' + nho;
            nho = so / 10;
            res[i+j+1] = char(so%10 + '0');
        }
        res[i] += nho;
    }
    while(res.size() > 1 && res[0] == '0') {
        res.erase(0,1);
    }
    return res;
}
int main () {
    int tc; cin >> tc;
    while(tc--) {
        int a,b; cin >> a >> b;
        if(a==0 || b==0) cout << "1" << endl;
        else {
            int c = a - b + 1;
            string res = "1";
            for(int i = c; i<=a; i++) {
                string tmp = to_string(i);
                res = mul(res,tmp);
            }
            cout << res << endl;
        }
    }
    return 0;
}