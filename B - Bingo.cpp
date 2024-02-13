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
    vector<vector<ll>> a(3,vector<ll>(3));
    vector<vector<ll>> c(3,vector<ll>(3));
    rep(i,3){
        rep(j,3){
            cin >> a[i][j];
        }
    }
    ll n; cin >> n;
    vector<ll> b(n);
    rep(i,n) cin >> b[i];
    rep(i,3){
        rep(j,3){
            rep(l,n){
               if(a[i][j] == b[l]) c[i][j] = 1;
            }
        }
    }
    ll ans = 0;
    rep(i,3){
        if(c[i][0] + c[i][1] + c[i][2] == 3) ans++;
    }
    
    rep(i,3){
        if(c[0][i] + c[1][i] + c[2][i] == 3) ans++;
    }

    if(c[0][0] + c[1][1] + c[2][2] == 3) ans++;
    if(c[0][2] + c[1][1] + c[2][0] == 3) ans++;
    puts(ans ? "Yes" : "No");
    return 0;
}