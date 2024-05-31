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
    ll cnt = 0, now = 0;
    vector<bool> seen(n, false);
    seen[0] = true;
    while(1) {
        if(seen[a[now]-1]){
            cout << -1 << endl;
            return 0;
        }
        if(a[now] == 2){
            cout << cnt+1 << endl;
            return 0;
        }
        seen[a[now]-1] = true;
        now = a[now]-1;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}