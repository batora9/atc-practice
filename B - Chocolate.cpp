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
    int n,d,x,cnt=0; cin >> n >> d >> x;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    rep(i,n) {
        int ai = 0;
        while(d >= ai*a[i]+1) {
            ai++;
            cnt++;
        }
    }
    cout << cnt+x << endl;
    return 0;
}