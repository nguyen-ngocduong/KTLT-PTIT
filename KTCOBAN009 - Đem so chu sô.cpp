#include <iostream>
#include <string>
using namespace std;

int main() {
    int tc; cin>>tc;
    while(tc--){
        string input;
        cin >> input;
        // X? l? tính s? lý?ng ch? s? c?a s? nguyên n
        int count = input.length();
        for(int i = 0; i< count ;i++) {
            if(input[0] == '-') {
                count = count -1;
                break;
            }
        }
    cout<<count<<endl; 
    }
    return 0;
}
