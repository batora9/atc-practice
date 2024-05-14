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
    ll n; cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    // 辞書順でソート
    sort(s.begin(), s.end());
    // mapでカウント
    map<string, int> mp;
    rep(i,n) {
        mp[s[i]]++;
    }
    int max = 0;
    for(auto x: mp) {
        if(x.second > max) max = x.second;
    }
    for(auto x: mp) {
        if(x.second == max) cout << x.first << endl;
    }
    return 0;
}