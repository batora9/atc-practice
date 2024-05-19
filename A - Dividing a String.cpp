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
    int ans = 1;
    bool flag = false;
    for(int i = 1; i < s.size(); i++) {
        if(s[i-1] == s[i]&&flag == false) {
            i++;
            flag = true;
            if(i>=s.size()) break;
            ans++;
        } else {
            ans++;
            flag = false;
        }
    }
    cout << ans << endl;
    return 0;
}