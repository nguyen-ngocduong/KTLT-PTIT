#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // �?c s? l�?ng test case
    while (t--) {
        int n;
        cin >> n; // �?c gi� tr? n

        vector<int> A(n); // T?o vector l�u tr? t?p h?p A
        iota(A.begin(), A.end(), 1); // Kh?i t?o A t? 1 �?n n

        do {
            // In ra ho�n v? hi?n t?i
            for (int i = 0; i < n; ++i) {
                cout << A[i];
                if (i < n - 1) cout << " "; // Th�m d?u c�ch gi?a c�c s?
            }
            cout << endl; // Xu?ng d?ng sau m?i ho�n v?
        } while (next_permutation(A.begin(), A.end())); // T?o ho�n v? ti?p theo
    }
    return 0;
}
