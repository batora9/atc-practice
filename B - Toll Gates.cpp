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
    int n,m,x; cin >> n >> m >> x;
    vector<int> a(m);
    rep(i,m) cin >> a[i];
    int ans1 = 0,ans2 = 0;
    for(int i = x; i <= n; i++) {
        rep(j,m) if(i == a[j]) ans1++;
    }
    for(int i = x; i >= 0; i--) {
        rep(j,m) if(i == a[j]) ans2++;
    }
    cout << min(ans1,ans2) << endl;
    return 0;
}