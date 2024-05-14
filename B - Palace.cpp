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
    ll n,num; double ans = 1e9; cin >> n;
    ll t,a; cin >> t >> a;
    vector<ll> h(n);
    rep(i,n) cin >> h[i];
    rep(i,n) {
        if(ans > abs(a-(t-h[i]*0.006))){
            ans = abs(a-(t-h[i]*0.006));
            num = i+1;
        }
        //cout << abs(a-(t-h[i]*0.006)) << endl;
    }
    cout << num << endl;
    return 0;
}