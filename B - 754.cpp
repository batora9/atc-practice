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
    int mini = 999;
    for(int i = 0; i < s.size()-1; i++) {
        int n = stoi(s.substr(i,3));
        mini = min(mini,abs(753-n));
    }
    cout << mini << endl;
}