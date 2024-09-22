#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i = a; i< b; i++)
int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n;
        cin>>n;
        long long a[n];
        bool ktra_duong = true;
        long long Max;
        f(i,0,n) {
            cin >> a[i];
            if(a[i] > 0) ktra_duong = true;
            if(i==0) Max = a[0];
            if(Max < a[i]) Max = a[i];
        }
        if(!ktra_duong) cout<<Max<<endl; // nếu toàn số âm thì in ra số âm lớn nhất
        else {
            long long sum = 0, tmp = a[0];
            f(i,0,n) {
                if(sum + a[i] < 0) {
                    sum = 0;
                    continue; //bỏ qua số đó
                }
                sum += a[i];
                if(tmp < sum) tmp = sum;
            }
            cout<<tmp<<endl;
        }
    }
    return 0;
}