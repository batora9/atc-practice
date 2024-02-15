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
    ll a,b,c,ans = 0; cin >> a >> b >> c;
    if(a == b && b == c && c == a) {
        if(a%2 == 0) cout << -1 << endl;
        else cout << 0 << endl;
        return 0;
    }

    while(a%2==0 && b%2==0 && c%2==0) {
        ll x,y,z;
        x = a/2; y = b/2; z = c/2;
        a = y + z;
        b = x + z;
        c = x + y;
        ans++;
    }
    cout << ans << endl;
    return 0;
}