#include <iostream>
#include <string>
using namespace std;

int main() {
    int tc; cin>>tc;
    while(tc--){
        string input;
        cin >> input;
        // X? l? t�nh s? l�?ng ch? s? c?a s? nguy�n n
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
