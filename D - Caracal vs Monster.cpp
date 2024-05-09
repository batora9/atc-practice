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
    ll h,cnt=1,ans=1; cin >> h;
    while(h > 1) {
        h /= 2;
        cnt *= 2;
        ans += cnt;
    }
    cout << ans << endl;
}