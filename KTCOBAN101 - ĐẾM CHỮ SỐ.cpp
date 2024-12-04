#include<bits/stdc++.h>
using namespace std;
string s;
int main () {
    int tc; cin >>tc;
    while (tc--)
    {
        int mang[10] = {0};
        int n,m; cin >> n>>m;
        for(int i = min(n,m); i<= max(n,m); i++){
            s = to_string(i);
            for(int j = 0; j<s.size(); j++){
                mang[s[j] - '0']++;
            }
            s = "";
        }
        bool check = true;
        for(int i = 0; i<10; i++){
            if(!check) cout << " " ;
            cout << mang[i];
            check = false;
        }
        cout << endl;
    }
    return 0;
}
