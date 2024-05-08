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
    ll a,b; cin >> a >> b;
    if(a < 0 && b > 0) cout << "Zero" << endl;
    else if(a > 0) cout << "Positive" << endl;
    else if(b < 0) {
        if((b-a+1)%2) cout << "Negative" << endl;
        else cout << "Positive" << endl;
    }
    return 0;
}