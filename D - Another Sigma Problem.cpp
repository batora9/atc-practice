#include <atcoder/modint>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int,int>;
using vi = vector<int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using mint = modint998244353;

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    mint ans = 0;
    rep(i,n) ans += mint(a[i])*i;
    vector<mint> b(n);
    rep(i,n) {
        b[i] = 1;
        int x = a[i];
        while (x) {
            b[i] *= 10;
            x /= 10;
        }
    }
    mint s = 0;
    for(int i = n-1; i >= 0; --i) {
        ans += s * b[i];
        s += b[i];
    }
    cout << ans.val() << endl;
    return 0;
}