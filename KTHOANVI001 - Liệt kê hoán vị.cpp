#include <bits/stdc++.h>
using namespace std;

int main () {
    int tc; cin>>tc;
    while(tc--) {
        int n; cin>>n;
        vector<int> A(n); // Tạo vecto lưu trữ tập hợp A có n ptu
        iota(A.begin(), A.end(), 1);//khởi tạo A từ 1 đến n
        ostringstream oss; // Sử dụng ostringstream để xây dựng kết quả
        do {
            // Thêm hoán vị hiện tại vào chuỗi
            for(int i = 0; i<n; i++) {
                oss << A[i];
                if(i < n-1) oss << " ";// Thêm dấu cách giữa các số
            }
            oss<<endl;// Xuống dòng sau mỗi hoán vị
        }while(next_permutation(A.begin(), A.end()));  // Tạo hoán vị tiếp theo
        cout << oss.str();  // In ra tất cả hoán vị cùng một lúc
    }
    return 0;
}
