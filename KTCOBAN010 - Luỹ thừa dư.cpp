#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007 
long long luy_thua(long long a, long long n){
	long long result=1;
	while(n) {
		if (n%2==1) {
			result = (result*a) % MOD; 
		}
		a = (a*a) % MOD;
		n /= 2; 
	}
	return result; 
}
int main () {
	int tc;cin>>tc;
	while(tc--) {
		long long a,n;
		cin>>a>>n;
		long long dap_an;
		dap_an = luy_thua(a,n); 
		cout<<dap_an<<endl; 
	} 
	return 0; 
} 
