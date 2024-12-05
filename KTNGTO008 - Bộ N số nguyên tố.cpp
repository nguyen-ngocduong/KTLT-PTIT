#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n<2) return false;
    for(int i = 2; i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

void timtohopPrime(int P, int N, int S, vector<int>& currentSet, vector<vector<int>>& primeSets){
    if(currentSet.size() == N && S==0) {
        primeSets.push_back(currentSet);
        return;
    }
    else if(currentSet.size() >= N || S <= 0){
        return;
    }
    for(int i = P+1; i <= S; i++){
        if(isPrime(i)){
            if(i > S) break;
            currentSet.push_back(i);
            timtohopPrime(i, N, S-i, currentSet, primeSets);
            currentSet.pop_back();
        }
    }
}

int main () {
    int P,N,S;
    cin>>P>>N>>S;
    vector<int> currentSet;
    vector<vector<int>> primeSets;
    timtohopPrime(P,N,S,currentSet, primeSets);

    if(primeSets.empty()) cout << -1 << endl;
    for(const auto& tohop : primeSets){
        for(int i : tohop) {
            cout << i <<" ";
        }
        cout << endl;
    }
    return 0;
}