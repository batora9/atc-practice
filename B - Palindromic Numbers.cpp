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
    int a,b,cnt = 0; cin >> a >> b;
    for(int i = a; i <= b; i++){
        string s = to_string(i);
        string t = s;
        reverse(t.begin(),t.end());
        if(s == t) cnt++;
    }
    cout << cnt << endl;
    return 0;
}