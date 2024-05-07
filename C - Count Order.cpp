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
    int n; cin >> n;
    vector<int> p(n), q(n);
    rep(i,n) cin >> p[i];
    rep(i,n) cin >> q[i];
    vector<int> a(n);
    rep(i,n) a[i] = i+1;
    int cnt = 0, p_cnt = -1, q_cnt = -1;
    do {
        cnt++;
        // pが何番目の順列か
        if(a == p) p_cnt = cnt;
        // qが何番目の順列か
        if(a == q) q_cnt = cnt;
    } while(next_permutation(a.begin(), a.end()));
    cout << abs(p_cnt-q_cnt) << endl;
    return 0;
}