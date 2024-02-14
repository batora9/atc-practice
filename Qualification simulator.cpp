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
    ll n,a,b; cin >> n >> a >> b;
    string s; cin >> s;
    rep(i,s.size()) {
        if(s[i] == 'a' && a+b > 0){
            cout << "Yes" << endl;
            a--;
        }
        else if(s[i] == 'b' && a+b > 0){
            if(b > 0) {
                cout << "Yes" << endl;
                b--;
            }
            else cout << "No" << endl;
        }
        else cout << "No" << endl;
    }
    return 0;
}