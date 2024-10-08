#include<bits/stdc++.h>
using namespace std;
int solve(int n, int i) {
    int tmp = n - i*i; // i là số bình phương đầu(i=1)
    if(tmp == 0) return 1; //n đã được biểu diễn hoàn toàn bằng các số chính phương
    if(tmp < 0) return 0; // n ko được biểu diễn bằng các số chính phương
    int a = solve(tmp, i); // tiếp tục tìm cách biểu diễn số chính phương tiếp theo cùng với số chính phương i^2 đã được trừ đi
    int b = solve(n,i+1); //xem xét số chính phương tiếp theo.
    return a+b; //tổng số cách biểu diễn n dưới dạng tổng chính phương
}
int main () {
    int tc; cin >>tc;
    while(tc--) {
        int n; cin>>n;
        cout << solve(n,1) <<endl;
    }
    return 0;
}