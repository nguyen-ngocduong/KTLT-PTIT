#include<bits/stdc++.h>
using namespace std;
vector<int> p(1000001,1);
void khoi_tao() {
    p[0]=p[1]=0;
    for(int i = 2; i<= 1000; i++) {
        //xét các bội của i
        if(p[i]) {
            for(int j = i*i; j<= 1000000; j+=i){
                p[j] = 0; //j ko là số nguyên tố nữa
            }
        }
    }
}
int main () {
    khoi_tao();
    int tc; cin>>tc;
    while(tc--) {
        int l,r;
        cin>>l>>r;
        int count = 0;
        for(int i = l; i<= r; i++) {
            if(p[i]) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}