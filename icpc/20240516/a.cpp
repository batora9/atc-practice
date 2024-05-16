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
    while(true) {
        ll n; cin >> n;
        if(n == 0) break;
        map<ll,ll> mp1,mp2;
        ll ans = 0;
        rep(i,n) {
            ll a; string b,c; cin >> a >> b >> c;
            if(c == "Gold") mp1[a]++;
            mp2[a]++;
        }
        ll ans1 = 0, ans2 = 0;
        for(auto p : mp1) {
            if(mp1[ans1] < p.second) ans1 = p.first;
        }
        for(auto p : mp2) {
            if(mp2[ans2] < p.second) ans2 = p.first;
        }
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}