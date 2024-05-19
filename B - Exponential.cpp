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
    ll x,ans = 1; cin >> x;
    for(ll i = 1; i <= 1000; i++) {
        for(ll j = 2; j <= 1000; j++) {
            if(pow(i,j) > x) break;
            ans = max(ans,(ll)pow(i,j));
        }
    }
    cout << ans << endl;
    return 0;
}