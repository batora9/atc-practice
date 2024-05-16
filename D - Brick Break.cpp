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
    ll n,cnt = 1,ans = 0; cin >> n;
    vector<ll> a(n); rep(i,n) cin >> a[i];
    // aに1が含まれているかどうかを判定
    bool flag = false;
    rep(i,n) if(a[i] == 1) flag = true;
    if(!flag) {
        cout << -1 << endl;
        return 0;
    }
    rep(i,n) if(a[i] == cnt) cnt++;
    cout << n - cnt + 1 << endl;
    return 0;
}