#include <iostream>
#include <vector>

using namespace std;

void printTriangle(const vector<int>& A) {
    int n = A.size();
    
    // In hàng đầu tiên
    cout<<"[";
    for (int i = 0; i < n; i++) {
        cout << A[i];
        if (i < n - 1) cout << " "; // In khoảng cách nếu không phải phần tử cuối cùng
    }
    cout<<"]";
    cout << endl;

    // Tạo và in các hàng tiếp theo
    vector<int> current = A;
    for (int i = 2; i <= n; i++) {
        vector<int> next;
        for (int j = 0; j < current.size() - 1; j++) {
            next.push_back(current[j] + current[j + 1]);
        }
        cout<<"[";
        for (int k = 0; k < next.size(); k++) {
            cout << next[k];
            if (k < next.size() - 1) cout << " "; // In khoảng cách nếu không phải phần tử cuối cùng
        }
        cout<<"]";
        cout << endl;

        current = next; // Cập nhật hàng hiện tại
    }
}

int main() {
    // Khởi tạo dãy số A[]
    int tc;cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> A(n);
        for(int i = 0; i<n;i++){
            cin>>A[i];
        }
        // In ra tam giác
        printTriangle(A);   
    }
    return 0;
}