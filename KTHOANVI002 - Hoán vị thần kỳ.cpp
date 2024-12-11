#include <bits/stdc++.h>
using namespace std;
void special_switch(int a[], int n, int k)
{
    bool b[n + 1];
    memset(b, false, sizeof(b));
    for (int i = 1; i <= n; ++i)
    {
        if (b[i] == false && i + k <= n)
        {
            b[i] = true;
            b[i + k] = true;
            swap(a[i], a[i + k]);
        }
        if (i + k > n && b[i] == false)
        {
            cout << -1 << "\n";
            return;
        }
    }
    for (int i = 1; i <= n; ++i)
        if (b[i] == true)
        {
            cout << a[i] << " ";
        }
    cout << "\n";
}
int t;
int n, k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[n + 1];
        for (int i = 1; i <= n; ++i)
            a[i] = i;
        special_switch(a, n, k);
    }
    return 0;
}