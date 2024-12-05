#include<bits/stdc++.h>
using namespace std;
unsigned long long a[20];
void giaithua(){
    a[0] = 1;
    for(int i = 1; i < 20; i++){
        a[i] = a[i - 1] * (i+1);
    }
}
int main (){
    giaithua();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        float sum = 0;
        for(int i = 1; i <= n; i++){
            float tmp = 1.0 / (i+1);
            sum = pow(sum + a[i - 1], tmp);
        }
        cout << fixed << setprecision(3) << sum << " " << endl;
    }
    return 0;
}