#include<bits/stdc++.h>
using namespace std;
string add(string a, string b) { // b= 2022, a= input
    int nho = 0;
    string output = "";
    while(a.size() < b.size()) a = "0" + a; // số ptu trong a < b thì thêm 0 vào đằng trước a
    while(a.size() > b.size()) b = "0" + b;
    int len = a.size() -1 ;
    for(int i = len; i>=0; i--) {
        int tong_kytu = int(a[i]-'0') + int(b[i]-'0') + nho;
        output = char(tong_kytu % 10 +'0') + output; // chuyển biến từ int sang string + '0'
        nho = tong_kytu / 10;
    }
    if(nho > 0) output = char(nho%10+'0') + output;
    return output;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        string input; cin>>input;
        cout<<add(input, "2022")<<endl;
    }
    return 0;
}