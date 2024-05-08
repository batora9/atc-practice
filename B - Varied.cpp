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
    // sに含まれる文字がすべて異なるか
    set<char> st;
    for(char c : s) st.insert(c);
    if(st.size() == s.size()) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}