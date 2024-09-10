#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
	if(n<=1) return 0;
	for(int i = 2; i<= sqrt(n); i++) {
		if(n%i==0) return 0; 
	}
	return 1; 
}
void max_prime(int L, int R){
	int ans = -1; 
	for(int i = L; i<= R; i++){
		if(isPrime(i)){
			ans = max(ans, i); 
		} 
	}
	cout<<ans<<endl; 
} 
int main (){
	int tc; cin>>tc;
	while(tc--){
		int L,R;
		cin>>L>>R;
		max_prime(L,R); 
	} 
	return 0; 
} 
