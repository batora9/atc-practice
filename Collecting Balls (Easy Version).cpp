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
    ll n,k,ans = 0; cin >> n >> k;
    vector<ll> x(n); rep(i,n) cin >> x[i];
    rep(i,n) {
        ans += min(x[i]*2,(k-x[i])*2);
    }
    cout << ans << endl;
    return 0;
}