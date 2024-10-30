// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int t;

// string add(string a, string b) {
//     // Đảm bảo a và b có cùng độ dài
//     while (a.size() < b.size()) a = "0" + a;
//     while (a.size() > b.size()) b = "0" + b;

//     int l = a.size();
//     string ans = "";
//     int nho = 0;

//     // Thực hiện phép cộng từ phải sang trái
//     for (int i = l - 1; i >= 0; i--) {
//         int so = (a[i] - '0') + (b[i] - '0') + nho;
//         nho = so / 10;
//         ans.push_back(so % 10 + '0'); // Thêm ký tự vào kết quả
//     }

//     // Nếu còn nhớ, thêm vào đầu
//     if (nho > 0) {
//         ans.push_back(nho + '0');
//     }

//     // Đảo ngược kết quả
//     reverse(ans.begin(), ans.end());
//     return ans;
// }

// string multiplyStrings(string num1, string num2) {
//     int n1 = num1.size();
//     int n2 = num2.size();
//     string result(n1 + n2, '0');

//     for (int i = n1 - 1; i >= 0; i--) {
//         int carry = 0;
//         for (int j = n2 - 1; j >= 0; j--) {
//             int product = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
//             carry = product / 10;
//             result[i + j + 1] = (product % 10) + '0';
//         }
//         result[i] += carry; // Thêm carry vào vị trí tương ứng
//     }

//     // Tìm vị trí bắt đầu của số không có số 0
//     size_t startPos = result.find_first_not_of('0');
//     if (startPos != string::npos) {
//         return result.substr(startPos); // Trả về chuỗi bắt đầu từ ký tự đầu tiên khác 0
//     }
//     return "0"; // Nếu toàn bộ là số 0
// }

// int main() {
//     string num1, num2;
//     cin >> num1 >> num2; // Đọc hai số lớn
//     cout << multiplyStrings(num1, num2) << endl; // In kết quả
//     return 0;
// }
// int main(){
//      ifstream ip("bignumber.in");
//      ofstream of("bignumber.out");
//      ip>>t;
//      string line;
//      getline(ip, line);
//      while(getline(ip,line)){
//          string s=line;
//      	string s1="";
//      	string s2="";
//      	char c;
//      	int j;
//      	for(int i=0;i<s.size();i++){
//      		if(s[i]>='0'&&s[i]<='9'){
//      			s1+=s[i];
// 		}
// 		else if(s[i]=='+'||s[i]=='*'){
// 			j=i;
// 			c=s[i];
// 			break;
// 		}
// 		 }
// 		 for(int i=j+1;i<s.size();i++){
// 		 	if(s[i]>='0'&&s[i]<='9')
// 		 	s2+=s[i];
// 		 }
// 		string s3;
// 		if(c=='+'){
// 			s3=add(s1,s2);
// 		}
// 		else{
// 			s3=multiplyStrings(s1,s2);
// 		}
// 		 of<<s3<<"\n";
// 	 }
// }
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int t;

string add(string a, string b) {
    // Đảm bảo a và b có cùng độ dài
    while (a.size() < b.size()) a = "0" + a;
    while (a.size() > b.size()) b = "0" + b;

    int l = a.size();
    string ans = "";
    int nho = 0;

    // Thực hiện phép cộng từ phải sang trái
    for (int i = l - 1; i >= 0; i--) {
        int so = (a[i] - '0') + (b[i] - '0') + nho;
        nho = so / 10;
        ans.push_back(so % 10 + '0'); // Thêm ký tự vào kết quả
    }

    // Nếu còn nhớ, thêm vào đầu
    if (nho > 0) {
        ans.push_back(nho + '0');
    }

    // Đảo ngược kết quả
    reverse(ans.begin(), ans.end());
    return ans;
}

string multiplyStrings(string num1, string num2) {
    int n1 = num1.size();
    int n2 = num2.size();
    string result(n1 + n2, '0');

    for (int i = n1 - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = n2 - 1; j >= 0; j--) {
            int product = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            carry = product / 10;
            result[i + j + 1] = (product % 10) + '0';
        }
        result[i] += carry; // Thêm carry vào vị trí tương ứng
    }

    // Tìm vị trí bắt đầu của số không có số 0
    size_t startPos = result.find_first_not_of('0');
    if (startPos != string::npos) {
        return result.substr(startPos); // Trả về chuỗi bắt đầu từ ký tự đầu tiên khác 0
    }
    return "0"; // Nếu toàn bộ là số 0
}

int main() {
    int tc; cin>>tc;
    while(tc--){
        string s1, dau,s2;
        cin >> s1 >> dau >> s2;
        if(dau == "+") {
            cout << add(s1,s2) << endl;
        }
        else if(dau == "*") {
            cout << multiplyStrings(s1,s2) << endl;
        }
    }
    return 0;
}