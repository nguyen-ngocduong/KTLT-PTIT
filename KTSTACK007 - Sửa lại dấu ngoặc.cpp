#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        string s; cin >> s;
        stack<char> st;
        int count = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') st.push(s[i]);
            else {
                if(st.size() == 0) {
                    st.push('(');
                    count++;
                }
                else {
                    st.pop();
                }
            }
        }
        cout << count + st.size() / 2<< endl;
    }
    return 0;
}