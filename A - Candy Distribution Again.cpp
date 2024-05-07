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
    ll n,x; cin >> n >> x;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    int cnt = 0,sum = 0;
    sort(a.begin(), a.end());
    rep(i,n) {
        sum += a[i];
        cnt++;
        if(sum > x) break;
    }
    cout << cnt-(sum!=x) << endl;
    return 0;
}