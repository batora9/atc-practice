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
    set<string> st;
    string top,back;
    cin >> back;
    st.insert(back);
    rep(i,n-1) {
        cin >> top;
        if(st.count(top)) {
            cout << "No" << endl;
            return 0;
        }
        // backの末尾とtopの先頭が一致していない場合
        if(back[back.size()-1] != top[0]) {
            cout << "No" << endl;
            return 0;
        }
        st.insert(top);
        back = top;
    }
    cout << "Yes" << endl;
    return 0;
}