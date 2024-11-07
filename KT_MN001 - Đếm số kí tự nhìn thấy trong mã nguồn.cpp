#include<bits/stdc++.h>
using namespace std;
int main () {
    string s;
    int count = 0;
    while(cin >> s) {
        count += s.size();
    }
    cout << count << endl;
    return 0;
}