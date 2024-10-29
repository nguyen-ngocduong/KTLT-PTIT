#include<bits/stdc++.h>
using namespace std;
string sum(string a, string b){
    string res = ""; int nho =0;
    while(a.size() < b.size()) a = '0' + a;
    while(a.size() > b.size()) b = '0' + b;
    for(int i = a.size() - 1; i >=0; i--) {
        int so = int(a[i] - '0') + int(b[i] - '0') + nho;
        res = char(so%10 + '0') + res;
        nho = so/10;
    }
    if(nho > 0) res = char(nho%10 + '0') + res;
    return res;
}
string bu9(string v) {
    string res = "";
    for(int i = 0; i<v.size(); i++) {
        res += '9' - v[i] +'0';
    }
    return res;
}
string subtract(string a, string b){
    while(a.size() < b.size()) a = '0' + a;
    while(a.size() > b.size()) b = '0' + b;
    string c = sum(a, bu9(b));
    if(c.size() > a.size()) { // có dư
        string::iterator it;
        char bit1 = c[0];
        string bit = {bit1};
        it = c.begin();
        c.erase(it);
        c = sum(c, bit);
        return c;
    }
    else {
        return bu9(c);
    }
}
int main () {
    int tc; cin >> tc;
    while(tc--) {
        string s1, s2;
        cin>>s1>>s2;
        cout << subtract(s1,s2) << endl;
    }
    return 0;
}