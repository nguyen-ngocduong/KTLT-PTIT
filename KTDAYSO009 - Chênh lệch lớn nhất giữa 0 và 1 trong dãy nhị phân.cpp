#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        string s;
        cin>>s;
        int cnt0 = 0, cnt1 = 0;
        int output = INT_MIN;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '0') cnt0++;
            if(s[i] == '1') cnt1++;
            if(cnt0 - cnt1 < 0) {
                cnt0 = cnt1 = 0;
            }
            else {
                output = max(output, cnt0 - cnt1);
            }
        }
        if(output < 0) output = -1;
        cout << output << endl;
    }
    return 0;
}