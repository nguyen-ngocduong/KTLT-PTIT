#include<bits/stdc++.h>
using namespace std;
string add(string a, string b) {
    string output = "";
    int nho = 0;
    while(a.size() < b.size()) a = '0' + a;
    while(a.size() > b.size()) b = '0' + b;
    int len = a.size() - 1;
    for(int i =len; i>= 0 ;i--) {
        int tong_kytu = int(a[i]-'0') + int(b[i] - '0') + nho;
        output = char(tong_kytu%10 + '0') + output;
        nho = tong_kytu/10;
    }
    if(nho > 0) output = char(nho%10 + '0') +output;
    return output;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        string input1,input2;
        cin>>input1>>input2;
        cout<<add(input1,input2) <<endl;
    }
    return 0;
}