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
    int n,m,c; cin >> n >> m >> c;
    vector<int> b(m);
    rep(i,m) cin >> b[i];
    vector<vector<int>> a(n,vector<int>(m));
    rep(i,n) rep(j,m) cin >> a[i][j];
    int ans = 0;
    rep(i,n) {
        int d = 0;
        rep(j,m) d += a[i][j]*b[j];
        if(d + c > 0) ans++;
    }
    cout << ans << endl;
    return 0;
}