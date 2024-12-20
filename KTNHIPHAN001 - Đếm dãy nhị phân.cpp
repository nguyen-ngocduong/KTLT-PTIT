#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll bintodec(string s,int n)
{
	ll sum=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1')
		{
			sum|=1<<(n-1-i);
		}
	}
	return sum;
}
int main()
{
	int t; cin >> t;
	cin.ignore();
	while(t--) {
		int n;
		cin >> n;
		string s1,s2;
		cin >> s1 >> s2;
		ll a=bintodec(s1,n);
		ll b=bintodec(s2,n);
        if(a < b) cout << b-a-1 << endl;
        else if(a == b) cout << "0" <<endl;
        else cout << a-b-1 << endl;
    }
    return 0;
}