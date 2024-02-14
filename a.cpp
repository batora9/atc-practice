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
    ll n,ans = 0;
    cin >> n;
    vector<ll> x(n); rep(i,n) cin >> x[i];
    sort(x.rbegin(),x.rend());
    rep(i,n) ans += x[i]*(i%2 ? -1 : 1);
    cout << ans << endl;
    return 0;
}