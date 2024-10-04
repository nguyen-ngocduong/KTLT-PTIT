#include<bits/stdc++.h>
using namespace std;
int n,l,r;
int f[300][300];
struct hangdoi {
    int x;//số chữ số 8
    int y;//số chữ số 6
};
hangdoi str[5000000];// chứa 5 triệu phần tử (x,y)
int mu10(int x) {
    int res = 1;
    for(int i = 1; i<=x; i++) {
        res = (res*10) % n; // tính 10^x mod n
    }
    return res;
}
void push(int x, int y) {
    r++;//Khi gọi hàm push, chúng ta tăng giá trị của r lên 1 để trỏ đến vị trí tiếp theo trong mảng.
    str[r].x = x;
    str[r].y = y;
}
void in(int x, int y) {
    for(int i = 0; i<x; i++) cout<<"8";
    for(int i = 0; i<y; i++) cout<<"6";
    cout<<endl;
}
void solve() {
    cin>>n;// biến l,r thể hiện chỉ số đầu vào, đầu ra của hàng đợi
    l = r = 1;
    for(int i = 0; i<= 201; i++){
        for(int j = 0; j <= 201; j++) {
            f[i][j] = -1; //khởi tạo tất cả phần tử trong mảng thành -1
        }
    }
    f[0][0] = 0;
    str[1].x = 0;
    str[1].y = 0;
    int check = 0;
    while(l <= r) {
        int x = str[l].x, y = str[l].y;
        if(x+y > 0 && f[x][y] == 0) {
            // ktra tổng có chia hết cho n không
            in(x,y);
            check = 1;
            break;
        }
        if(y + 1 <= 200 && f[x][y+1] == -1) { // thêm chữ số 6
            push(x, y+1);
            f[x][y+1] = (f[x][y] * 10 + 6) % n;//cập nhật giá trị của trạng thái f[x][y + 1],
        }
        if(x+1 <= 200 && f[x+1][y] == -1) {
            push(x+1, y);
            f[x+1][y] = (8 * mu10(x+y) % n + f[x][y] % n) % n;  //cập nhật giá trị của trạng thái f[x + 1][y]
        }
        if(x+y > 200) {
            break;
        }
        l++;
    }
    if(check == 0) cout<<"-1"<<endl;
}
int main () {
    int tc; cin>>tc; 
    while(tc--) {
        solve();
    }
    return 0;
}