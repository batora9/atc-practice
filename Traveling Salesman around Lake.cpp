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
    ll k,n,ans = 0,maxi = 0; cin >> k >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    rep(i,n-1) {
        maxi = abs(a[i] - a[i+1]);
        ans = max(maxi,ans);
    }
    maxi = a[0] + abs(k-a[n-1]);
    ans = max(ans,maxi);
    cout << k - ans << endl;
    return 0;
}