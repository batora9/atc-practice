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
    int n; cin >> n;
    vector<int> clr(9);
    rep(i,n) {
        int a; cin>>a;
        if(a < 400) clr[0]++;
        if(a >= 400&&a < 800) clr[1]++;
        if(a >= 800&&a < 1200) clr[2]++;
        if(a >= 1200&&a < 1600) clr[3]++;
        if(a >= 1600&&a < 2000) clr[4]++;
        if(a >= 2000&&a < 2400) clr[5]++;
        if(a >= 2400&&a < 2800) clr[6]++;
        if(a >= 2800&&a < 3200) clr[7]++;
        if(a >= 3200) clr[8]++;
    }
    int mini = 0;
    rep(i,8) if(clr[i]) mini++;
    int maxi = mini + clr[8]; 
    if(!mini) mini = 1;
    cout << mini << " " << maxi<< endl;
}