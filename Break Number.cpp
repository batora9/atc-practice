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
    int n,ans = 1; cin >> n;
    int x[] = {2,4,8,16,32,64};
    rep(i,6){
        if(x[i] <= n) ans = x[i];
    }
    cout << ans << endl;
    return 0;
}