/*output kết quả ra
x,y chữ số tạo ra output
x_count, y_count số lượng c/s x,y
sochuso là số chữ số của n
output*10+x thêm x vào output => số lượng x_count tăng 1
output*10+y thêm y vào out put => số lượng y_count tăng 1*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000000000001
typedef unsigned long long ull;
ull hamdequy(ull output, short x, ull x_count, short y, ull y_count, ull n, ull sochuso) {
    if(x_count + y_count > sochuso + 2 || output > MAX){
        return MAX;
    }
    if(x_count == y_count && output >= n) {
        return output;
    }
    return min(hamdequy(output*10+x, x, x_count + 1, y,y_count,n,sochuso),
            hamdequy(output*10+y, x, x_count, y, y_count + 1, n, sochuso));
}
ull timso(ull n, short x, short y){
    ull output = 0, x_count = 0, y_count = 0;
    int sochuso = 1 + floor(log10(n));
    if(x == y) {
        while(output > n) {
            output = output * 10 + x;
        }
        return output;
    }
    return hamdequy(output, x, x_count, y, y_count, n, sochuso);
}
int main () {
    int tc; cin>>tc;
    while(tc--) {
        ull n; cin>>n;
        short x,y; cin>>x>>y;
        cout<<timso(n,x,y)<<endl;
    }
    return 0;
}