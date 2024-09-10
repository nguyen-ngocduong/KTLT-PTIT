#include<bits/stdc++.h>
using namespace std;
bool la_cap_so_cong(int a[], int n){
	int diference = a[1] - a[0]; 
	for(int i = 0; i<n ;i++) {
		if((a[i] - a[i-1]) != diference) {
			return false; 
		}
	}
	return true; 
} 
int main () {
	int tc; cin>>tc;
	while(tc--) {
		int n; cin >> n;
		int a[n];
		for(int i = 0; i<n ; i++) {
			cin>>a[i]; 
		}
		if(n<3) cout<<"YES"<<endl;
		else {
		    if(la_cap_so_cong(a,n)) cout<<"YES"<<endl;
		    else cout<<"NO"<<endl; 	
		} 
	} 
	return 0; 
} 
