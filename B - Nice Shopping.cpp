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
    ll a,b,m; cin >> a >> b >> m;
    vector<ll> an(a), bn(b);
    rep(i,a) cin >> an[i];
    rep(i,b) cin >> bn[i];
    vector<ll> x(m),y(m),c(m);
    rep(i,m) cin >> x[i] >> y[i] >> c[i];
    ll ans = 0;
    ans = *min_element(an.begin(),an.end()) + *min_element(bn.begin(),bn.end());
    rep(i,m) {
        ans = min(ans,an[x[i]-1] + bn[y[i]-1] - c[i]);
    }
    cout << ans << endl;
    return 0;
}