#include<bits/stdc++.h>
using namespace std;
int tong_uoc_so(long long n){
    int sum = 1;
    for(int i =2; i<= sqrt(n); i++) {
        if(n%i == 0 ){
            if(n/i == i){
                sum += i;
            }
            else {
                sum += i;
                sum += n/i;
            }
        }
    }
    return sum == n && n!= 1;
}
int main() {
    int tc; cin >> tc;
    while(tc--) {
        long long n; cin >> n;
        if(tong_uoc_so(n)) {
            cout<<1<<endl;
        }
        else {
            cout<<0<<endl;
        }
    }
    return 0;
}