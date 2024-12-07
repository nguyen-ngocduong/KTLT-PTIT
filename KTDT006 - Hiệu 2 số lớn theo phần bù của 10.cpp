#include<bits/stdc++.h>
using namespace std;
string tong(string a, string b) {
    int nho = 0; string res = "";
    while(a.size() > b.size()) b = '0' + b;
    while(a.size() < b.size()) a = '0' + a;
    for(int i = a.size() - 1; i>=0; i--) {
        int so = int(a[i] - '0') + int(b[i] - '0') + nho;
        res = char(so % 10 + '0') + res;
        nho = so / 10;
    }
    if(nho) {
        res = char(nho + '0') + res;
        nho/=10;
    }
    return res;
}
string bu10(string v) {
    string complement = "";
    for (int i = 0; i < v.size(); i++)
    {
        complement += '9' - v[i] + '0';
    }
    complement = tong(complement, "1");
    return complement;
}

string subtract(string a, string b){
    string res = "";
    if (a.length() < b.length()) 
        swap(a, b);

    int l1 = a.length(), l2 = b.length();
    int diffLen = l1 - l2;

    for (int i = 0; i < diffLen; i++) {
        b = "0" + b;
    }
    string c = tong(a, bu10(b));
    if (c.length() > a.length())
    {
        string::iterator it;

        it = c.begin();

        c.erase(it);
        it = c.begin();

        while (*it == '0')
            c.erase(it);

        return c;
    }
    else
    {
        return bu10(c);
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--) {
        string s1,s2;
        cin >> s1 >> s2;
        cout << subtract(s1, s2) << endl;
    }
    return 0;
}