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
    string s; cin >> s;
    int a = s.size(), z = 0, maxi = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'A') a = min(a, i);
        if(s[i] == 'Z') z = max(z, i);
    }
    cout << z-a+1 << endl;
    return 0;
}