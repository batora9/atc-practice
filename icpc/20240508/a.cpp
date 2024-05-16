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
    while(1) {
        ll n; cin >> n;
        if(n == 0) break;
        vector<ll> a(n);
        rep(i,n) cin >> a[i];
        int cnt = 0;
        for(int i = 1; i < n-1; i++) {
            if(a[i-1] < a[i] && a[i] > a[i+1]) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}