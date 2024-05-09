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
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    ll cnt = 0;
    bool ok = true;
    while(1) {
        rep(i,n) {
            if(a[i]%2 != 0) ok = false;
            else a[i] /= 2;
        }
        if(!ok) break;
        cnt++;
    }
    cout << cnt << endl;
}