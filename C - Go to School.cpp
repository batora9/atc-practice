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
    ll n; cin >> n;
    vector<ll> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) {
        b[a[i]-1] = i+1;
    }
    rep(i,n) cout << b[i] << " ";
    cout << endl;
    return 0;
}