#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        string time, equal, h;
        cin>>time>>equal>>h;
        if(h[1] == '?') {
            if(h[2] >= '0' && h[2] <= '3' || h[2] == '?') {
                h[1] = '2';
            }
            else h[1] = '1';
        }
        if(h[2] == '?') {
            if(h[1] == '2') {
                h[2] = '3';
            }
            else h[2] = '9';
        }
        if(h[4] == '?') {
            h[4] = '5';
        }
        if(h[5] == '?') {
            h[5] = '9';
        }
        cout<<h<<endl;
    }
    return 0;
}