#include<bits/stdc++.h>
using namespace std;
int strStr(string a, string b) {
    return b.find(a);
}
int main () {
    int tc; cin>>tc;
    cin.ignore();
    while(tc--){
        string s;
        getline(cin,s);
        string s1 = "";
        string s2 = "";
        int i = 9; 
        while(s[i] != '"') {
            s1 += s[i];
            i++;
        }
        int j = i+13;
        while(s[j] != '"'){
            s2 += s[j];
            j++;
        }
        cout << strStr(s1,s2) << endl;
    }
    return 0;
}