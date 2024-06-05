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
    vector<pair<ll,string>> p(m);
    rep(i,m) {
        ll pi; string s;
        cin >> pi >> s;
        p[i].first = pi; p[i].second = s;
    }
    vector<bool> ok(n,false);
    vector<ll> no(n,0);
    ll ac = 0, wa = 0;
    rep(i,m) {
        if(ok[p[i].first-1] == false && p[i].second == "AC") {
            ac++;
            ok[p[i].first-1] = true;
        }
        if(ok[p[i].first-1] == false && p[i].second == "WA") no[p[i].first-1]++; 
    }
    rep(i,n) if(!ok[i]) no[i] = 0;
    rep(i,n) wa += no[i];
    cout << ac << " " << wa << endl;
}