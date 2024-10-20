#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        string s;
        cin>>s;
        stack<string> st;
        for(int i = s.size() - 1; i >=0; i--) {
            if(s[i] == '^' || s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-') {
                string a = st.top(); // lấy giá trị đầu 
                st.pop(); // xóa giá trị vừa lấy
                string b = st.top();
                st.pop();
                string tmp = a+b+s[i];
                st.push(tmp);
            }
            else st.push(string(1,s[i]));
        }
        cout << st.top() <<endl;
    }
    return 0;
}