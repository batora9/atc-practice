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
    int h,w; cin >> h >> w;
    vector<vector<char>> a(h,vector<char>(w));
    rep(i,h) {
        rep(j,w) cin >> a[i][j];
    }
    rep(i,h+2) {
        if(i == 0 || i == h+1) {
            rep(k,w+2) cout << '#';
            cout << endl;
            continue;
        }
        cout << '#';
        rep(j,w) cout << a[i-1][j];
        cout << '#';
        cout << endl;
    }
    return 0;
}