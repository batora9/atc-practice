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
        ll h,w ; cin >> h >> w;
        if(h == 0 && w == 0) break;
        ll ans = 0;
        vector<vector<char>> a(h,vector<char>(w));
        vector<vector<bool>> used(h,vector<bool>(w));
        rep(i,h) rep(j,w) used[i][j] = false;
        rep(i,h) rep(j,w) cin >> a[i][j];
        stack<pair<ll,ll>> st;
        rep(i,h) {
            rep(j,w) {
                if(j+1 > w && i-1 > 0 && used[i][j] == false && used[i][j+1] == false && used[i-1][j] == false && a[i][j] == '.' && a[i][j+1] == '.' && a[i-1][j] == '.') {
                    st.push({i,j});
                    used[i][j] = true;
                    used[i][j+1] = true;
                    used[i-1][j] = true;
                    continue;
                }
                if(j+1 > w && i+1 > h && used[i][j] == false && used[i][j+1] == false && used[i+1][j] == false && a[i][j] == '.' && a[i][j+1] == '.' && a[i+1][j] == '.') {
                    st.push({i,j});
                    used[i][j] = true;
                    used[i][j+1] = true;
                    used[i+1][j] = true;
                    continue;
                }
                if(j > 1 && i+1 > h && used[i][j] == false && used[i-1][j] == false && used[i][j+1] == false && a[i][j] == '.' && a[i][j+1] == '.' && a[i-1][j] == '.') {
                    st.push({i,j});
                    used[i][j] = true;
                    used[i-1][j] = true;
                    used[i][j+1] = true;
                    continue;
                }
                if(i-1 > 0 && j+1 > w && used[i][j] == false && used[i][j+1] == false && used[i-1][j] == false && a[i][j] == '.' && a[i][j+1] == '.' && a[i-1][j] == '.') {
                    st.push({i,j});
                    used[i][j] = true;
                    used[i][j+1] = true;
                    used[i-1][j] = true;
                    continue;
                }
                st.pop();
            }
        }
        cout << endl;
        rep(i,h) {
            rep(j,w) {
                if(used[i][j] == false) {
                    cout << 0;
                }
                else {
                    cout << 1;
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}