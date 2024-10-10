#include<bits/stdc++.h>
using namespace std;
int main () {
    string email;
    vector<string> v;
    while(getline(cin, email) && !email.empty()) {
        size_t tim = email.find('@');
        if(tim != string::npos) {
            string id = email.substr(0, tim);//tách id
            v.push_back(id);//lưu id vào vecto
        }
    }
    for(const auto& id : v) {
        cout << id <<endl;
    }
    return 0;
}