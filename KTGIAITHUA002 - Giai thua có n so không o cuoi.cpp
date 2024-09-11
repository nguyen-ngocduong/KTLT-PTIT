#include<bits/stdc++.h>
using namespace std;
bool kiem_tra(long long m, long long n) {
	long long x = m, sum = 0, f=5;
	while(x>= f) {
		  sum += x/f;
		  f *= 5; 
	}
	return sum >= n; 
}
long long tim (long long n) {
	if(n==1) return 5;
	long long low = 0;
	long long high = 5*n;
	while(low<high) {
		long long mid = (low+high) >> 1; // khong khac chia nguyen 2 
		if(kiem_tra(mid, n)) {
			high = mid; 
		}
		else {
			low = mid+1; 
		} 
	}
	return low; 
}
int main () {
	int tc; cin>>tc;
	while(tc--) {
		long long n;
		cin>>n;
		cout<<tim(n)<<endl; 
	}
	return 0; 
} 
