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
    ll a,b,k; cin >> a >> b >> k;
    set<ll> st;
    int cnt = 1;
    for(ll i = a; i <= b; i++) {
        if(cnt <= k) {
            st.insert(i);
            cnt++;
        }
    }
    cnt = 1;
    for(ll i = b; i >= a; i--) {
        if(cnt <= k) {
            st.insert(i);
            cnt++;
        }
    }
    for(auto x : st) {
        cout << x << endl;
    }
    return 0;
}