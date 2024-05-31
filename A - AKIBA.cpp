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
    // AKIHABARAからAを取り除いたものを16通り列挙
    vector<string> ans = {"KIHBR", "KIHBRA", "KIHBAR", "KIHABR", "AKIHBR","KIHABAR", "KIHABRA", "KIHABAR", "KIHABARA", "AKIHABR", "AKIHABAR", "AKIHABRA", "AKIHABARA", "KIHABR", "KIHABRA", "KIHABARA"};
    // どれかに一致すればYES
    for(auto a : ans){
        if(s == a){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}