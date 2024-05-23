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
    while(true) {
        ll n,cnt = 0; cin >> n;
        if(n == 0) break;
        vector<ll> d(n);
        rep(i,n) cin >> d[i];
        for(int i = 0; i < n-3; i++) {
            if(d[i] == 2 && d[i+1] == 0 && d[i+2] == 2 && d[i+3] == 0) cnt++;
        }
        cout << cnt << endl;
    }
}