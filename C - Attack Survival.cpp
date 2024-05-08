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
    ll n,k,q; cin >> n >> k >> q;
    vector<ll> a(q),val(n,k);
    rep(i,q) cin >> a[i];
    rep(i,q) val[a[i]-1]++;
    rep(i,n){
        if(val[i] - q > 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}