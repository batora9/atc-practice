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
    ll n,m; cin >> n >> m;
    vector<ll> l(m),r(m);
    rep(i,m) cin >> l[i] >> r[i];
    vector<ll> table(n+1,0);
    rep(i,m) {
        table[l[i]]++;
        table[r[i]+1]--;
    }
    rep(i,n+1) {
        if(0 < i) table[i] += table[i-1];
    }
    ll cnt = 0;
    rep(i,n+1) {
        if(table[i] == m) cnt++;
    }
    cout << cnt << endl;
    return 0;
}