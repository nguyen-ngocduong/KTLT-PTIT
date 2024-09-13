#include<bits/stdc++.h>
using namespace std;
int bac_uu_tien(char x) {
	if(x=='^') return 5;
	if(x=='*' || x=='/') return 4;
	if(x=='+'|| x=='-') return 3;
	return 2; 
} 
void Giai(string input) {
	string output = "";
	stack<char> st;
	for(int i = 0; i<input.length(); i++) {
		if(input[i] >= 'a' && input[i] <= 'z') output += input[i];
		else if(input[i] >='A' && input[i] <= 'Z') output += input[i];
		else if(input[i] == '(') st.push(input[i]);
		else if(input[i] == ')') {
			while(st.size() && st.top() != '('){
				output += st.top();
				st.pop(); 
			}
			st.pop(); 
		}
		else if(input[i] =='^'||input[i]=='*'||input[i]=='/'||input[i]=='+'||input[i]=='-') {
			while(st.size() && bac_uu_tien(st.top()) >= bac_uu_tien(input[i])) {
				output += st.top();
				st.pop(); 
			}
			st.push(input[i]); 
		}
	}
	while(st.size()) {
		if(st.top() != '(') output += st.top();
		st.pop(); 
	}
	cout<<output<<endl; 
}
int main () {
    int tc;cin>>tc;
    while(tc--) {
        string input;
        cin>>input;
        Giai(input);
    }
    return 0;
} 
