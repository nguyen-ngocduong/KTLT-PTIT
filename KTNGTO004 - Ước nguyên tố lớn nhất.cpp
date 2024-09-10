#include <bits/stdc++.h>
using namespace std;

long long max_prime(long long n) {
    if (n < 2) return -1; // Tr? v? -1 n?u n < 2

    long long max_prime_factor = -1;

    // Ki?m tra 2 tr�?c �? lo?i b? t?t c? c�c s? ch?n
    while (n % 2 == 0) {
        max_prime_factor = 2;
        n /= 2;
    }

    // Ki?m tra c�c s? l? t? 3 �?n sqrt(n)
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            max_prime_factor = i;
            n /= i;
        }
    }

    // N?u n c?n l?i l?n h�n 2, n� l� s? nguy�n t? l?n nh?t
    if (n > 1) max_prime_factor = n;

    return max_prime_factor;
}

int main() {
    int tc; 
    cin >> tc;
    while (tc--) {
        long long n;
        cin >> n;
        cout << max_prime(n) << endl; 
    }
    return 0; 
} 
