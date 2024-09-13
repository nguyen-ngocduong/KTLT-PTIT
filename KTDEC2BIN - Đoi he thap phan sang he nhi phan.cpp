#include<bits/stdc++.h>
using namespace std;
int main () {
	int tc; cin>>tc;
	while(tc--) {
		long long n; cin>>n;
		stack<long long> st;
		while(n != 0 ) {
			st.push(n%2);
			n/=2; 
		}
		while(!st.empty()) {
			cout<<st.top();
			st.pop(); 
		}
		cout<<endl; 
	}
	return 0; 
} 
