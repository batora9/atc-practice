#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using vi = vector<int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  // 頂点数と辺数
  int N, M; cin >> N >> M;
  // グラフ入力受取 (ここでは無向グラフを想定)
  vector<vector<int>> G(N);
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    // 無向グラフの場合は双方向に辺を張る
    G[a].push_back(b);
    G[b].push_back(a);
  }
  // BFS のためのデータ構造
  vector<int> dist(N, -1); // 全頂点を「未訪問」に初期化
  queue<int> que;
  // 初期条件 (頂点 0 を初期ノードとする)
  dist[0] = 0;
  que.push(0); // 0 を橙色頂点にする
  // BFS 開始 (キューが空になるまで探索を行う)
  while (!que.empty()) {
    int v = que.front(); // キューから先頭頂点を取り出す
    que.pop(); // キューから先頭頂点を取り出す
    // v から辿れる頂点をすべて調べる
    for (int nv : G[v]) {
      if (dist[nv] != -1) continue; // すでに発見済みの頂点は探索しない
      // 新たな白色頂点 nv について距離情報を更新してキューに追加する
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }
  // 結果出力 (各頂点の頂点 0 からの距離を見る)
  for (int v = 0; v < N; ++v) cout << v << ": " << dist[v] << endl;
}