#include<bits/stdc++.h>
using namespace std;
// Hàm để phân tích thành thừa số nguyên tố
map<long long, int> phantichsnt(long long n) {
    map<long long, int> primes;
    // Phân tích cho các số nguyên tố từ 2
    for(long long i=2; i*i<=n; i++) {
        while(n%i==0) {
            primes[i]++;
            n /= i;
        }
    }
    // Nếu n còn lại lớn hơn 1, nó là số nguyên tố
    if(n > 1) primes[n]++;
    return primes;
}

int main () {
    int tc; cin>>tc;
    while(tc--) {
        long long n; cin>>n;
        // Phân tích thành thừa số nguyên tố
        map<long long, int> primes = phantichsnt(n);
        // Tìm thừa số nguyên tố nhỏ nhất có lũy thừa lớn nhất
        long long maxPow = -1;
        long long minPrime = -1;
        for(const auto& prime : primes) {
            if(prime.second > maxPow){
                maxPow = prime.second;
                minPrime = prime.first;
            }
            else if(prime.second == maxPow){
                minPrime = min(minPrime, prime.first);
            }
        }
        cout << minPrime << " " << maxPow << endl;
    }
    return 0;
}