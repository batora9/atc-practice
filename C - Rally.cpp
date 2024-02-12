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
    ll n,ans,min_; cin >> n;
    vector<int> X(n);
    rep(i,n) cin >> X[i];
    for(int i = 1; i <= 100; i++) {
        ans = 0;
        rep(j,n) ans += (X[j]-i)*(X[j]-i);
        min_ = min(min_,ans);
    }
    cout << min_ << endl;
    return 0;
}