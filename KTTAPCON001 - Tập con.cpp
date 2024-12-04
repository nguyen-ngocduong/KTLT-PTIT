#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fn(i, a, b) for (int i = a; i >= b; --i)
const int MOD = 1e9 + 7;
using namespace std;

ll t, n;
vector<ll> a, b;
map<ll, int> cnt;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        a.resize(n);  // Resize vector để chứa n phần tử
        b.clear();    // Làm trống vector b
        cnt.clear();  // Làm trống map

        // Nhập dữ liệu vào vector a
        f(i, 0, n - 1) {
            cin >> a[i];
            cnt[a[i]] = 0;  // Khởi tạo đếm cho mỗi phần tử
        }

        // Sắp xếp vector a
        sort(a.begin(), a.end());

        // Loại bỏ phần tử trùng lặp và lưu vào b
        for (ll val : a) {
            cnt[val]++;
            if (cnt[val] == 1)
                b.push_back(val);
        }

        // Tính tích theo công thức
        ll ans = 1;
        for (ll val : b)
            ans = (ans * (cnt[val] + 1)) % MOD;

        // Xuất kết quả
        cout << (ans - 1 + MOD) % MOD << " ";

        // Lọc các giá trị không âm và xuất dưới dạng mảng
        b.clear();
        for (ll val : a) {
            if (val >= 0) 
                b.push_back(val);
        }

        if (b.size() > 1) {
            cout << "[";
            for (size_t i = 0; i < b.size(); ++i) {
                if (i > 0) cout << ", ";
                cout << b[i];
            }
            cout << "]\n";
        } else if (b.size() == 1) {
            cout << "[" << b[0] << "]\n";
        } else {
            cout << "[" << a.back() << "]\n";  // Nếu không có giá trị không âm, in phần tử lớn nhất
        }
    }
    return 0;
}
