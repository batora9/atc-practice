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

// 引数が'1'なら'0'に変え、'0'なら'1'に変える
void change(char &c) {
    if(c == '1') c = '0';
    else c = '1';
}

int main(){
    string s; cin >> s;
    char f = s[0];
    int cnt = 0;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == f) {
            change(s[i]);
            cnt++;
        }
        f = s[i];
    }
    cout << cnt << endl;
    return 0;
}