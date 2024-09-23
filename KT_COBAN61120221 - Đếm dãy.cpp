#include<bits/stdc++.h>
using namespace std;
#define MOD 123456789
long long power(long long n, long long k) {//hàm tính lũy thừa theo pp chia để trị n^k = n^(k/2)*n^(k/2)
    if(k==1) return n;
    long long x = power(n, k/2); //gọi đệ quy n^k/2
    if(k%2==0) return (x*x)%MOD;
    else return (((x*x)%MOD)*n)%MOD;
}
int main () {
    int tc; cin>>tc; 
    while(tc--) {
        long long n;
        cin>>n;
        cout<<power(2,n-1) <<endl;
    }
    return 0;
}