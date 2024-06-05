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
    vector<ll> h(n);
    rep(i,n) cin >> h[i];
    reverse(h.begin(),h.end());
    rep(i,n) {
        if(i == 0) continue;
        if(h[i] - h[i-1] > 1) {
            cout << "No" << endl;
            return 0;
        }
        if(h[i] - h[i-1] == 1) h[i]--;
    }
    cout << "Yes" << endl;
}