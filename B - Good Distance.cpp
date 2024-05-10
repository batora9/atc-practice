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
    int n,d; cin >> n >> d;
    double x[n][d];
    rep(i,n) {
        rep(j,d) cin >> x[i][j];
    }
    double dist; int cnt = 0;
    // 2点間の距離を求める
    rep(i,n) {
        for(int j = i+1; j < n; j++) {
            dist = 0;
            rep(k,d) {
                dist += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
            }
            dist = sqrt(dist);
            // distが整数値かどうか判定
            if(dist == (int)dist) cnt++;
        }
    } 
    cout << cnt << endl;
    return 0;
}