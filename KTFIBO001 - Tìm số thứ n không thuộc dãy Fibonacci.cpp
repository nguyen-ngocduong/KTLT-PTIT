#include<bits/stdc++.h>
using namespace std;
int fibo[50];
void khoi_tao() {
    fibo[0] = 0; fibo[1] = 1;
    for(int i = 2; i< 50; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}
void output (long long n) {
    long long sum = 0;
    for(int i = 2; i< 50; i++) {
        int tmp = fibo[i] - fibo[i-1];
        if(tmp > 1) {
            sum += tmp - 1;
            if(sum >= n) {
                cout<<fibo[i-1] + n - (sum -tmp+1)<<endl;
                break;
            }
        }
    }
}
int main()
{
    khoi_tao();
    int t; cin >> t;
    while(t--)
    {
        long long n; cin >> n;
        output(n);
    }
   return 0; 
}