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
    ll a,b,c,k; cin >> a >> b >> c >> k;
    ll diff = a-b;
    if(abs(diff) > 1e18) {
        cout << "Unfair" << endl;
        return 0;
    }
    k%2 ? diff = -(a-b) : a-b;
    cout << diff << endl;
    return 0;
}