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
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    int maxi = 0,cnt = 0;
    for(int i = 0; i < n-1; i++) {
        if(h[i] >= h[i+1]) cnt++;
        else cnt = 0;
        maxi = max(maxi,cnt);
    }
    cout << maxi << endl;
    return 0;
}