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
    int n = s.size();
    int ans = 0,maxi = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T') {
            ans++;
            maxi = max(ans,maxi);
        }else{
            ans = 0;
        }
    }
    cout << maxi << endl;
    return 0;
}