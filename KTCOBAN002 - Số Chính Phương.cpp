#include<bits/stdc++.h>
using namespace std;
bool chinhphuong(int n) {
    return pow((int)sqrt(n), 2) == n;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        int k; cin>>k;
        if(k==1) {
            cout<<1<<endl;
        }
        else if(k%2==1) {
            string s; 
            s = '1';
            for(int i = 2; i<= k; i++) {
                s = s+'0';
            }
            cout<<s<<endl;
        }
        else{
            int n = (int)sqrt(pow(10,k-1)) + 1, m; // xét n nằm trong khoảng căn 10^(k-1) đến căn 10^k
            while(n*n < pow(10,k)) {
                m = n*n;
                while(m) { //kiểm tra từng số trong m
                    int du = m%10; 
                    if(chinhphuong(du)) m/=10;
                    else break;
                }
                if(m==0) break;
                n++;
            }
            if(m==0) {
                cout<<n*n<<endl;
            }
            else {
                cout<< -1 <<endl;
            }
        }
    }
    return 0;
}