#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Ð?c s? lý?ng test case
    while (t--) {
        int n;
        cin >> n; // Ð?c giá tr? n

        vector<int> A(n); // T?o vector lýu tr? t?p h?p A
        iota(A.begin(), A.end(), 1); // Kh?i t?o A t? 1 ð?n n

        do {
            // In ra hoán v? hi?n t?i
            for (int i = 0; i < n; ++i) {
                cout << A[i];
                if (i < n - 1) cout << " "; // Thêm d?u cách gi?a các s?
            }
            cout << endl; // Xu?ng d?ng sau m?i hoán v?
        } while (next_permutation(A.begin(), A.end())); // T?o hoán v? ti?p theo
    }
    return 0;
}
