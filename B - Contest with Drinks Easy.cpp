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
    ll n,m; cin >> n;
    vector<ll> t(n); rep(i,n) cin >> t[i];
    cin >> m;
    rep(i,m) {
        ll a,b; cin >> a >> b;
        ll prev_a = a-1,preb_b = t[a-1];
        t[a-1] = b;
        ll cnt = 0;
        rep(j,n) cnt += t[j];
        cout << cnt << endl;
        t[prev_a] = preb_b;
    }
    return 0;
}