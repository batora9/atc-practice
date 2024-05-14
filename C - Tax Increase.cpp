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
    ll a,b; cin >> a >> b;
    ll ans;
    for(int i = 1; i <= 1100; i++) {
        if((int)(i*0.1) == b && (int)(i*0.08) == a) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}