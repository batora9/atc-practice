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
    ll n,k; cin >> n >> k;
    vector<ll> a(n),s(n+1); rep(i,n) cin >> a[i];
    rep(i,n) s[i+1] = s[i] + a[i];
    ll ans = 0;
    for(int i = 0; i < n-k+1; i++){
        ans += s[i+k] - s[i];
    }
    cout << ans << endl;
    return 0;
}