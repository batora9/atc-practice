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
    vector<ll> v(5);
    rep(i,5) cin >> v[i];
    ll sum = 643;
    do {
        ll time = 0;
        rep(i,5) {
            time += v[i];
            if(i != 4) {
                if(time%10 != 0) time += 10-(time%10);
            }
        }
        sum = min(sum,time);
    } while(next_permutation(v.begin(),v.end()));
    cout << sum << endl;
    return 0;
}