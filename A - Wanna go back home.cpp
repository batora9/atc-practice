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
    string s; cin >> s;
    set<char> NS,EW;
    rep(i,s.size()) {
        if(s[i] == 'N' || s[i] == 'S') NS.insert(s[i]);
        if(s[i] == 'E' || s[i] == 'W') EW.insert(s[i]);
    }
    if(NS.size()%2 == 0&&EW.size()%2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}