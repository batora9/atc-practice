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
    ll n,k,sum = 0; cin >> n >> k;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    sum = k*(k+1)/2;
    cerr << sum << endl;
    rep(i,n) {
        if(i > 0&& a[i] == a[i-1]) continue;
        if(a[i] > k) break;
        else sum -= a[i];
    }
    cout << sum << endl;
}