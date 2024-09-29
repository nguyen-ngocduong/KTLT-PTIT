#include<bits/stdc++.h>
using namespace std;
void giai_thua(long long a[], long long n, long long k){
    long long tich, r = 0, m = 1;
    a[0] = 1;
    for(int i = n-k+1; i<=n ;i++){
        for(int j = 0; j<m; j++){
            tich = a[j]*i + r; //tính tích theo công thức
            a[j] = tich % 10000; //gán 4 ptu cuối vào mảng
            r = tich / 10000; //xét tiếp đến phần tử tiếp theo
        }
        while(r>0) {
            a[m] = r%10000;
            r /= 10000;
            m++; //lưu  tiếp 4 ptu khác vào trong mảng cho ptu tiếp theo
        }
    }
    cout<<a[m-1]; //in ptu cuối trước
    for(int i = m-2; i>=0; i--){
        cout<<setw(4)<<setfill('0')<<a[i];
    }
}
int main (){
    int tc;cin>>tc;
    while(tc--){
        long long n,k;
        cin>>n>>k;
        long long a[10000];
        giai_thua(a,n,k);
        cout<<endl;
    }
    return 0;
}