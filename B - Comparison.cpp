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
    string a,b; cin >> a >> b;
    if(a.size() > b.size()) {
        cout << "GREATER" << endl;
        return 0;
    }else if(a.size() < b.size()) {
        cout << "LESS" << endl;
        return 0;
    }
    rep(i,a.size()) {
        if(a[i] > b[i]) {
            cout << "GREATER" << endl;
            return 0;
        } else if(a[i] < b[i]) {
            cout << "LESS" << endl;
            return 0;
        }else{
            cout << "EQUAL" << endl;
            return 0;
        }
    }
    return 0;
}