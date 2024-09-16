#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        string s; cin>>s;
        long long bin_to_dec = 0;// khởi tạo giá trị thập phân
        long long tmp = 1;// biến để lưu 2^i
        for(int i = s.length()-1; i >= 0; i--) {
            if(s[i] == '1') {
                bin_to_dec += tmp;
            }
            tmp <<= 1; // Dịch trái để tính 2^(i-1)
        }
        cout<<bin_to_dec<<endl;
    }
    return 0;
}