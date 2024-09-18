#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n; cin>>n;
        if(n==1 || n==2) cout<<9<<endl;
        if(n==3 || n==4) cout<<90<<endl;
        if(n==5 || n==6) cout<<900<<endl;
        if(n==7 || n==8) cout<<9000<<endl;
        if(n==9 || n==10) cout<<90000<<endl;
        if(n==11 || n==12) cout<<900000<<endl;
        if(n==13 || n==14) cout<<9000000<<endl;
        if(n==15 || n==16) cout<<90000000<<endl;
        if(n==17 || n==18) cout<<900000000<<endl;
    }
    return 0;
}