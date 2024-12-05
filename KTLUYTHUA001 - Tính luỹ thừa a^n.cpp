#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
#define mod 1000000007
int mul(int x, int arr[], int arr_size){
    int nho = 0;
    for(int i = 0; i<arr_size; i++){
        int res = x*arr[i] + nho;
        arr[i] = res%10;
        nho = res/10;
    }
    while(nho != 0) {
        arr[arr_size] = nho%10;
        nho /= 10;
        arr_size++; 
    }
    return arr_size;
}

void solve(int x, int n) {
    if(n==0) {
        cout << "1";
        return;
    }
    int res[MAX];
    int res_size = 0;
    int tmp = x;
    while(tmp > 0) {
        res[res_size++] = tmp%10;
        tmp /= 10;
    }
    for(int i = 2; i<=n; i++) {
        res_size = mul(x, res, res_size);
    }
    for(int i = res_size - 1; i >= 0; i--) {
        cout << res[i]%mod;
    }
} 
int main () {
    int tc; cin>>tc;
    while(tc--) {
        int a,n; cin>>a>>n;
        if(a==0) {
            cout << "0" << endl;
        }
        else {
            solve(a,n);
            cout << endl;
        }
    }
    return 0;
}