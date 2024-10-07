#include<bits/stdc++.h>
using namespace std;
int main () {
    int tc; 
    cin>>tc;
    while(tc--) {
        int a,b; 
        cin>>a>>b;
        string s1 = to_string(a);
        string s2 = to_string(b);
        int min_val = 0; 
        int max_val = 0;
        for(char &c : s1) {
            if(c == '5') 
                c = '3';
        }
        min_val += stoi(s1);
        for(char &c : s2) {
            if(c == '5') 
                c='3';
        }
        min_val += stoi(s2);
        for(char &c : s1){
            if(c=='3') 
                c = '5';
        }
        max_val += stoi(s1);
        for(char &c : s2) {
            if(c == '3') 
                c = '5';
        }
        max_val += stoi(s2);
        cout << min_val << " " << max_val << endl;
    }
    return 0;
}