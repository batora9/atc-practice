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
    int n,m; cin >> n >> m;
    vector<int> a(m),b(m);
    rep(i,m) cin >> a[i] >> b[i];
    rep(i,n) {
        int cnt = 0;
        rep(j,m) {
            if(i+1 == a[j]) cnt++;
            if(i+1 == b[j]) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}