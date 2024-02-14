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
    ull h,w; cin >> h >> w;
    if(h == 1 || w == 1) {
        cout << 1 << endl;
        return 0;
    }

    if(h*w%2 == 0) cout << h*w/2 << endl;
    else cout << h*w/2+1 << endl;
    return 0;
}