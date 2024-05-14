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
    vector<vector<char>> c(h, vector<char>(w));
    rep(i,h) rep(j,w) cin >> c[i][j];
    rep(i,h) {
        rep(j,w) {
            cout << c[i][j];
        }
        cout << endl;
        rep(j,w) {
            cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}