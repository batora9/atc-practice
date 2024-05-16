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
    string o,e; cin >> o >> e;
    string ans;
    bool amari = (o+e).size()%2 ? true : false;
    rep(i,(o+e).size()/2) ans += o.substr(i,1) + e.substr(i,1);
    if(amari) ans += o.substr(o.size()-1);
    cout << ans << endl;
    return 0;
}