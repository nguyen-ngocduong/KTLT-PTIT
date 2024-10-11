#include<bits/stdc++.h>
using namespace std;
int cnt_res(int n, int k){ // k là chỉ số mũ
    if(n==0 || k==0) {
        return 1;
    }
    if(n >= pow(2,k)){
        int tmp = pow(2,k);
        return cnt_res(n-tmp, k) + cnt_res(n, k-1);
        // nếu n >= 2^k thì có 2 trường hợp n giảm đi tmp hoặc k giảm đi 1
    }
    return cnt_res(n,k-1);
    //ngược lại n < 2^k chỉ có 1 th là giảm k 1 đơn vị
}
int main () {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin>>n;
        int k = log2(n);
        cout << cnt_res(n,k) <<endl;
    }
    return 0;
}