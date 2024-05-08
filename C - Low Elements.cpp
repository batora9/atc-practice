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
    int n; cin >> n;
    vector<ll> p(n);
    rep(i,n) cin >> p[i];
    ll cnt = 1;
    ll mini = p[0];
    for(int i = 1; i < n; i++) {
        mini = min(mini,p[i-1]);
        if(p[i] <= mini) cnt++;
    }
    cout << cnt << endl;
    return 0;
}