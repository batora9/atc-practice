#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int,int>;
using vi = vector<int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int x; cin >> x;
    bool dp[101010];
    dp[0] = true;
    for(int i=0;i<x;i++) {
        if(dp[i]) {
            for(int j=0;j<6;j++) {
                dp[i+j+100] = true;
            }
        }
    }
    if(dp[x]) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}