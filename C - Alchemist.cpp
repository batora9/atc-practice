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
    double a[n]; rep(i,n) cin >> a[i];
    sort(a,a+n);
    double ans = a[0];
    for(int i=1; i<n; i++){
        ans = (ans + a[i])/2;
    }
    cout << ans << endl;
    return 0;
}