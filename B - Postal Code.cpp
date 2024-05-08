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
    int a,b; cin >> a >> b;
    string s; cin >> s;
    // a文字目がハイフンであるかかつハイフンが1つだけ含まれるか
    if(s[a] == '-' && count(s.begin(), s.end(), '-') == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}