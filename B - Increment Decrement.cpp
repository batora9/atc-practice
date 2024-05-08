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
    string s; cin >> s;
    int cnt = 0,ans = 0;
    rep(i,s.size()) {
        if(s[i] == 'I') cnt++;
        else cnt--;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}