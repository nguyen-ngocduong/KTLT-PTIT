#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
#define mod 1000000007
int mul(int x, int arr[], int arr_size){
    int nho = 0;
    for(int i = 0; i<arr_size; i++){
        int res = x*arr[i] + nho;
        arr[i] = res%10;
        nho = res/10;
    }
    while(nho != 0) {
        arr[arr_size] = nho%10;
        nho /= 10;
        arr_size++; 
    }
    return arr_size;
}

void solve(int x, int n) {
    if(n==0) {
        cout << "1";
        return;
    }
    int res[MAX];
    int res_size = 0;
    int tmp = x;
    while(tmp != 0) {
        res
    }
} 
int main () {}