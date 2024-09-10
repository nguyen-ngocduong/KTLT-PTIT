#include <bits/stdc++.h>
using namespace std;

void sum(int n){
	long long sum = 0; 
	int a = 0, b= 1;
	while(a<=n) {
		if(a%2==0) {
			sum += a; 
		}
		int c = a+b;
		a=b;
		b=c; 
	}
	cout<<sum<<endl; 
}

int main() {
    int tc; 
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        sum(n); 
    } 
    return 0;
}
