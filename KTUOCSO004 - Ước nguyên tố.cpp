#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long tmp = n;
        long long res = 1;
        for(long long i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                res*=i;
                while(n % i == 0) n/=i;
            }
        }
        if(n != 1) res *= n;
        if(res < tmp) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}