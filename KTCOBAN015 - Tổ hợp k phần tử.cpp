#include<bits/stdc++.h>
using namespace std;
void dequy(int start, int n, int k, vector<int>& current, vector<vector<int>>& res) {
    if(k == 0) {
        res.push_back(current);
        return;
    }
    for(int i = start; i <= n; i++) {
        current.push_back(i);
        dequy(i + 1, n, k - 1, current, res);
        current.pop_back();
    }   
}
int main () {
    int tc; cin >> tc;
    while(tc--) {
        int n,k; cin >> n >> k;
        vector<vector<int>> res;
        vector<int> current;
        dequy(1, n, k, current, res);
        cout << res.size() << endl;
        for(const auto& tohop : res) {
            cout << "[";
            for(int i = 0; i < tohop.size(); i++) {
                cout << tohop[i];
                if(i != tohop.size() - 1) cout << " ";
            }
            cout << "]\n";
        }
    }
    return 0;
}