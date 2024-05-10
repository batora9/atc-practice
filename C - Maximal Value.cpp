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
    int n,sum = 0; cin >> n;
    vector<int> a(n,0),b(n-1);
    rep(i,n-1) cin >> b[i];
    a[0] = b[0];
    for(int i = 1; i < n-1; i++) {
        a[i] = min(b[i-1],b[i]);
    }
    a[n-1] = b[n-2];
    rep(i,n) sum += a[i];
    cout << sum << endl;
    return 0;
}