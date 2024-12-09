#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; cin>>tc;
    while(tc--) {
        string s; cin>>s;
        int len = s.size();
        vector<int> v(len,1);// khởi tạo 1 vector có s.size ptu và gán các giá trị bằng 1
        for(int i = 0; i<len; i++) {
            s[i] = tolower(s[i]);
        }
        for(int i = 0; i<len; i++) {
            for(int j = 0; j<i; j++) {// s[j] số trước s[i]
                if(s[i] > s[j]) {
                    v[i] = max(v[i], v[j] + 1);
                }
            }
        }
        cout << *max_element(v.begin(), v.end()) <<endl;
    }
    return 0;
}