/*char a[]: Mảng ký tự biểu diễn chuỗi số cần xét.
int start: Vị trí bắt đầu trong mảng a để xét.
int end: Vị trí kết thúc trong mảng a.
int tongtruoc: Tổng các chữ số trong nhóm trước đó (mặc định là 0).*/
#include<bits/stdc++.h>
using namespace std;
int dem(char a[], int start, int end, int tongtruoc){
    if(start == end) return 1;
    int sum = 0, res = 0;
    for(int i = start; i <= end; i++){
        sum += a[i] - '0';
        if(sum == tongtruoc) res += dem(a, i + 1, end, sum);
    }
    return res;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; char a[41];
        cin >> n >> a;
        cout << dem(a, 0, n, 0) << endl;
    }
    return 0;
}