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
    ll n,a,b; cin >> n >> a >> b;
    if((b-a)%2 == 0) {
        cout << (b-a)/2 << endl;
        return 0;
    }
    if(a < n/2 ) {
        cout << (b-a)/2 << endl;
        return 0;
    }
    cout << (n-a+(n-b))/2 << endl;
    return 0;
}