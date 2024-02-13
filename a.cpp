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
    ll n,a=0,b=0;
    cin >> n;
    vector<ll> x(n); rep(i,n) cin >> x[i];
    sort(x.rbegin(),x.rend());
    for(int i = 0; i < n/2;) {
        a += x[i];
        b += x[i+1];
        i+=2;
    }
    if(n%2 != 0) a += x[n-1];
    cout << a << b << endl;
    cout << abs(a-b) << endl;
    return 0;
}