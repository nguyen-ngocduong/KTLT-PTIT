#include<bits/stdc++.h>
using namespace std;
char HEX[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', 
            '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n; cin>>n;
        vector<char> v;
        if(n==0) v.push_back('0');
        while(n != 0) {
            long long tmp = n%16;
            v.push_back(HEX[tmp]);
            n /= 16;
        }
        reverse(v.begin(), v.end());
        for(char c : v) {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}