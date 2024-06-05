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
    int r,c; cin >> r >> c;
    int sy,sx; cin >> sy >> sx;
    // 1-indexed -> 0-indexed
    sy--; sx--;
    int gy,gx; cin >> gy >> gx;
    // 1-indexed -> 0-indexed
    gy--; gx--;
    vector<string> s(r);
    rep(i,r) cin >> s[i];
    // dist[y][x] = (sy,sx)から(y,x)までの最短距離
    vector<vi> dist(r,vi(c,-1));
    queue<pair<int,int>> q;
    // (sy,sx)からの距離は0
    q.push({sy,sx});
    dist[sy][sx] = 0;
    // 幅優先探索
    while(!q.empty()){
        // キューの先頭を取り出す
        auto [y,x] = q.front(); q.pop();
        // 4方向に移動
        int dy[] = {0,1,0,-1};
        int dx[] = {1,0,-1,0};
        rep(i,4){
            int ny = y + dy[i];
            int nx = x + dx[i];
            // 範囲外ならスキップ
            if(ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
            // 壁ならスキップ
            if(s[ny][nx] == '#') continue;
            // すでに訪問済みならスキップ
            if(dist[ny][nx] != -1) continue;
            // 距離を更新してキューに追加
            dist[ny][nx] = dist[y][x] + 1;
            // キューに追加
            q.push({ny,nx});
        }
    }
    cout << dist[gy][gx] << endl;
    return 0;
}