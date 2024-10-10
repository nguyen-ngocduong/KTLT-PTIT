#include<bits/stdc++.h>
using namespace std;
int cnt(const string& number) {
    int count = 0;
    for(int i = number.length() - 1; i >= 0; i--) {
        if(number[i] == '0') {
            count++;
        }
        else break;
    }
    return count;
}
int main () {
    string line;
    while(getline(cin, line) && !line.empty()){
        int dem = cnt(line);
        cout << dem <<endl;
    }
    return 0;
}