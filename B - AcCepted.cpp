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
    if(s[0] != 'A') {
        cout << "WA" << endl;
        return 0;
    }
    int cnt = 0;
    for(int i = 2; i < s.size()-1; i++) {
        if(s[i] == 'C') cnt++;
    }
    if(cnt != 1) {
        cout << "WA" << endl;
        return 0;
    }
    cnt = 0;
    for(int i = 0; i < s.size(); i++) {
        if(islower(s[i])) cnt++;
    }
    if(cnt != s.size()-2) {
        cout << "WA" << endl;
        return 0;
    }
    cout << "AC" << endl;
    return 0;
}