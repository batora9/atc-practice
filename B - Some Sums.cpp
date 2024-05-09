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
    int n,a,b; cin >> n >> a >> b;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        int num = i;
        // iの各桁の和を求める
        int tmp = 0;
        while(num > 0) {
            tmp += num % 10;
            num /= 10;
        }
        if(a <= tmp && tmp <= b) sum += i;
    }
    cout << sum << endl;
    return 0;
}