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

int judge(int x) {
    if(x%2 == 0) return x/2;
    return x*3+1;
}

int main(){
    int s,ans = 1; cin >> s;
    set<int> st;
    st.insert(s);
    while(1){
        ans++;
        s = judge(s);
        if(st.count(s)) break;
        else st.insert(s);
    }
    cout << ans << endl;
    return 0;
}