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
    ll a,b,c = 1,ans = 0;
    cin >> a >> b;
    for(;;) {
        if(b <= c) break;
        else ans++;
        c += a-1;
    }
    cout << ans << endl;
    return 0;
}