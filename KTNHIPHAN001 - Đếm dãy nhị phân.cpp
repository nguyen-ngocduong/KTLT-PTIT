#include<bits/stdc++.h>
using namespace std;
long long BINTODEC(string s, unsigned long long n) {
    long long sum = 0;
    for(int i = 0; i<n; i++) {
        if(s[i] == '1') {
            sum |= 1<<(n-i-1);
        }
    }
    return sum;
}
int main (){
    int tc; cin >>tc;
    while(tc--) {
        unsigned long long n;
        string s1,s2;
        cin >> n >> s1 >> s2;
        long long a = BINTODEC(s1,n);
        long long b = BINTODEC(s2,n);
        if(a < b) cout << b-a-1 << endl;
        else if(a == b) cout << "0" <<endl;
        else cout << a-b-1 << endl;
    }
    return 0;
}