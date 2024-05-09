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
    ll n,m; cin>>n>>m;
    vector<ll> k(n);
    vector<vector<ll>> a(n);
    rep(i,n) {
        cin >> k[i];
        rep(j,k[i]) {
            ll tmp; cin >> tmp;
            a[i].push_back(tmp);
        }
    }
    vector<ll> cnt(m+1); // 1-indexed
    rep(i,n) {
        for(auto x : a[i]) cnt[x]++;
    }
    ll ans = 0;
    for(int i = 1; i <= m; i++) {
        if(cnt[i] == n) ans++; 
    }
    cout << ans << endl;
    return 0;
}