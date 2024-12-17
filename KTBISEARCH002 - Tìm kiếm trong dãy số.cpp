#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
pair<int,int>p[MAX];
int tim(int x,pair<int,int>p[],int n){
	int l=1,r=n;
	while(l<=r){
		int m=(l+r)/2;
		if(p[m].first==x&&p[m-1].first<x){
			return p[m].second;
		}
		else if(p[m].first>=x){
			r=m-1;
		}
		else{
			l=m+1;
		}
	}
	return 0;
}
int main(){
	int n,m;
	cin>>n>>m;
	int a[n+1],b[m+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		p[i].first=a[i];
		p[i].second=i;
	}
	sort(p+1,p+n+1);
	for(int i=1;i<=m;i++){
		cin>>b[i];
		cout<<tim(b[i],p,n)<<" ";
	}
}