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
    ll snum; cin >> snum;
    string s = to_string(snum);
    int n = s.size();
    int top = s[0] - '0';
    if((top+1)*pow(10,n-1)-1 == snum) {
        cout << top + 9*(n-1) << endl;
        return 0;
    }
    cout << top + 9*(n-1) - 1 << endl;
    return 0;
}