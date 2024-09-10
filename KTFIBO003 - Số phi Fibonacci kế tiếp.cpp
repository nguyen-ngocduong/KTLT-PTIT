#include<bits/stdc++.h>
using namespace std;
long long a[45];
void khoi_tao() {
	a[0] = 1; a[1] = 1;
	for(int i = 2; i<45; i++) {
		a[i] = a[i-1]+a[i-2]; 
	} 
}
int main () {
	int tc; cin>>tc;
	khoi_tao();
	while(tc--) {
		int n; cin>>n; 
		for(int i = 0; i<45 ; i++){
			if(a[i] > n) {
				if(a[i] - n == 1) {
					cout<<a[i] + 1<<endl; 
					break; 
				}
				else {
					cout<<n+1<<endl; 
					break; 
				} 
			} 
		} 
	} 
	return 0; 
}
