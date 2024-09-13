#include<bits/stdc++.h>
using namespace std;
int main () {
	int tc; cin>>tc;
	while(tc--) {
		string s; cin>>s;
		stack<char> st;
		bool check = true; 
		for(char x : s) {
			if(x=='(' || x=='[' || x=='{') {
				st.push(x); 
			}
			else {
				if(st.empty()) {
					check = false;
					break; 
				}
				else {
					char top = st.top();
					if((x==')'&&top=='(' )|| (x==']'&&top =='[') || (x=='}'&&top == '{')){
						st.pop(); 
					}
					else {
						check = false;
						break; 
					} 
				} 
			} 
		}
		if(st.empty() && check) cout<<"YES"<<endl;
		else cout<<"NO"<<endl; 
	}
	return 0; 
} 
