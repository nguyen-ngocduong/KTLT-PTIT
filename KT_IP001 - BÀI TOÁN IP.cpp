#include<bits/stdc++.h>
using namespace std;
bool check(string &s)
{
	if(s.empty() || s.size() > 3)
	return false;
	if(s[0] == '0' && s.size() > 1)
	return false;
	int num = stoi(s);
	return num >= 0 && num <= 255;
}
void solve(string &s){
    int count = 0;
    int len = s.size() - 1;
    for(int i = 0; i<= len && i<4;i++){
        for(int j = i+1; j<=len && j<i+4; j++){
            for(int k = j+1; k<=len && k<j+4;k++){
                string part1 = s.substr(0,i);
                string part2 = s.substr(i,j-i);
                string part3 = s.substr(j,k-j);
                string part4 = s.substr(k,len);
                if(check(part1)&&check(part2)&&check(part3)&&check(part4)) count++;
            }
        }
    }
    cout<<count<<endl;
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}