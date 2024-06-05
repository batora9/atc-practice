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
    // gにたどり着けるかどうかを判定する
    // たどり着ける場合はYes、たどり着けない場合はNoを出力する
    stack<pair<int,int>> st;
    vector<vector<bool>> seen(h, vector<bool>(w, false));
    // スタート地点をスタックに積む
    rep(i,h)rep(j,w){
        if(s[i][j] == 's'){
            st.push({i,j});
            // スタート地点は探索済みとする
            seen[i][j] = true;
        }
    }
    // スタックが空になるまで探索を続ける
    while(!st.empty()){
        auto [i,j] = st.top(); st.pop();
        // スタックから取り出した地点がゴール地点ならYesを出力して終了
        if(s[i][j] == 'g'){
            cout << "Yes" << endl;
            return 0;
        }
        // 4近傍を探索、探索順序は上下左右
        for(auto [di,dj]: vector<pair<int,int>>{{-1,0},{1,0},{0,-1},{0,1}}){
            int ni = i + di, nj = j + dj;
            // マップの範囲外ならスキップ
            if(ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            // 壁ならスキップ
            if(s[ni][nj] == '#') continue;
            // すでに探索済みならスキップ
            if(seen[ni][nj]) continue;
            // 未探索ならスタックに積む
            st.push({ni,nj});
            // 未探索地点を探索済みとする
            seen[ni][nj] = true;
        }
    }
    cout << "No" << endl;
    return 0;
}