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
    // ある1つの要素を除いたときの最大値を求める典型テクニック
    ll n; cin >> n;
    vector<ll> a(n); rep(i,n) cin >> a[i];
    vector<ll> s(n+1,-1),e(n+1,-1);
    rep(i,n) s[i+1] = max(s[i],a[i]);
    reverse(a.begin(),a.end());
    rep(i,n) e[i+1] = max(e[i],a[i]);
    // for(auto x : s) cout << x << " "; cout << endl;
    // for(auto x : e) cout << x << " "; cout << endl;
    rep(i,n) cout << max(s[i], e[n-i-1]) << endl;
    return 0;
}