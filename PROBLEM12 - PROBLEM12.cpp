#include<bits/stdc++.h>
using namespace std;
string add(string s) {
    string res = "";
    int nho = 1; // bắt đầu với nhớ là 1 để + 1
    int len = s.size();
    for(int i = len - 1; i>= 0; i--) {
        int digit = (s[i] - '0') + nho;
        if(digit >= 10) {
            nho = 1; // Nếu tổng >= 10, nho vẫn là 1
            res += (digit - 10)+ '0'; // Thêm chữ số vào kết quả
        }
        else {
            nho = 0; // Không còn carry nữa
            res += digit + '0'; // Thêm chữ số vào kết quả
        }
    }
    if(nho) {
        res += '1';
    }
    reverse(res.begin(), res.end());
    return res;
}
int main () {
    string s;
    cin>>s;
    cout << add(s) <<endl;
    return 0;
}