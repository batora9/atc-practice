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
    string a,b;
    cin >> a >> b;
    a += b;
    int n = stoi(a);
    for(int i = 1; i <= 100100; i++) {
        if(i*i == n){
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}