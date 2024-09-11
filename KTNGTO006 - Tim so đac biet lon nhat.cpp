#include<bits/stdc++.h>
using namespace std;
long long mang[100001];
void max_uoc() {
	for(int i = 2;i<=100000;i++) {
		int n = i;
		vector<long long> v;
		while(n%2 == 0) { // kiem tra boi cua 2 
			v.push_back(2);
			n /= 2; 
		}
		while(n%3==0) { // ktra boi cua 3 
			v.push_back(3);
			n/=3 ;
		}
		for(int i = 5; i<= sqrt(n); i+=6){ // kiem tra snt >3 co dang 6k+1 va 6k+5; 
			while(n%i==0){
				v.push_back(i);
				n /= i; 
			}
			while(n%(i+2) == 0) {
				v.push_back(i+2);
				n /= i+2; 
			}
		}
		if(n) v.push_back(n); // neu n la snt thi push vao vecto 
		// luu uoc so lon nhat
		sort(v.begin(), v.end());
		mang[i] = v[v.size() - 1]; 
	} 
} 
int main () {
	max_uoc();
	int tc; cin >> tc;
	while(tc--) {
		int n; cin>>n;
		for(int i = n; i>=1 ; i--) {
			if(mang[i] > sqrt(n)) {
				cout<<i<<endl; 
				break; 
			} 
		} 
	}
	return 0; 
} 
 
