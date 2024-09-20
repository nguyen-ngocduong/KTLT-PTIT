#include<bits/stdc++.h>
using namespace std;
bool check(long long n) {
    long long res = 0;
    long long ktra = n;
    while(n) {
        res = res*10+ n%10;
        n/=10;
    }
    return ktra == res;
}
void solve(long long n) {
    long long truoc = n-1;
    long long sau = n+1;
    while(!check(truoc)) truoc--;
    while(!check(sau)) sau++;
    long long khoang_cach_1 = abs(truoc-n);
    long long khoang_cach_2 = abs(sau-n);
    if(khoang_cach_1 == khoang_cach_2) {
        cout<<truoc<<" "<<sau<<endl;
    }
    else if(khoang_cach_1 < khoang_cach_2) {
        cout<< truoc <<endl;
    }
    else cout<<sau<<endl;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n;
        cin>>n;
        if(check(n)) cout<<n<<endl;
        else solve(n);
    }
    return 0;
}