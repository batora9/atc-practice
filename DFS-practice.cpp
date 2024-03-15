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

vector<bool> seen;
void dfs(const vector<vector<int>> &G, int v){
  seen[v] = true; // v を訪問済にする
  for(auto nv : G[v]){
    if(seen[nv]) continue; // すでに訪問済みならば探索しない
    dfs(G, nv); // 再帰的に探索
  }
}

int main(){
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
  // 頂点 0 をスタートとした探索
  seen.assign(N, false); // 初期状態では全頂点が未訪問
  dfs(G, 0); // 頂点 0 をスタートとした探索
  // 結果出力
  for (int v = 0; v < N; ++v) cout << v << ": " << seen[v] << endl;   
}