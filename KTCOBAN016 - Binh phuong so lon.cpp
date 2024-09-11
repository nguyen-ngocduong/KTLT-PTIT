#include<bits/stdc++.h>
using namespace std;
void so_lon_hon9(int n, bool mot = 1){
    if(n > 9)
	{
		cout << "123456790";
		so_lon_hon9(n-9, 0);
		cout << "098765432";
		if (mot) cout << 1;
	}
	else {
		if (n==1) return;
		for (int i = 1; i <= n; i++)
		{
			cout << i;
		}
		for (int i = n-1; i > 1; i--)
		{
			cout << i;
		}
		return;
	}
}
void so_nho_hon9(int n) {
    if (n == 1)
	{
		cout << 1;
		return;
	}
	for (int i = 1; i<= n; i++)
	{
		cout << i;
	}
	for (int i = n-1; i > 0; i--)
	{
		cout << i;
	}
	return;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        int n; cin>>n;
        if(n>9) so_lon_hon9(n);
        else so_nho_hon9(n);
        cout<<endl;
    }
    return 0;
}
