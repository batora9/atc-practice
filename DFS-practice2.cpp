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
    ll h,w; cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    // sがスタート地点、gがゴール地点
    // gにたどり着けるかどうかの判定を行う
    int sx,sy,gx,gy;
    rep(i,h)rep(j,w){
        if(s[i][j] == 's') sx = i, sy = j;
        if(s[i][j] == 'g') gx = i, gy = j;
    }
    vector<vector<bool>> seen(h, vector<bool>(w, false));
    vector<int> dx = {1,0,-1,0};
    vector<int> dy = {0,1,0,-1};
    queue<P> que;
    que.push(P(sx,sy));
    seen[sx][sy] = true;
    while(!que.empty()){
        int x,y;
        tie(x,y) = que.front(); que.pop();
        rep(i,4){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if(seen[nx][ny]) continue;
            if(s[nx][ny] == '#') continue;
            seen[nx][ny] = true;
            que.push(P(nx,ny));
        }
    }
    if(seen[gx][gy]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;    
}