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

void bubbleSort(vi &a, int n){
    bool flag = true;
    while(flag){
        flag = false;
        // a[j] < a[j-1] ならば交換する
        // 交換が不要の時はflagはfalseのまま終了
        for(int j=n-1;j>0;j--){
            if(a[j] < a[j-1]){
                swap(a[j], a[j-1]);
                flag = true;
            }
            rep(i, n){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}

int main(){
    vector<int> a = {5, 3, 2, 4, 1};
    bubbleSort(a, 5);
    cout << "Result:" << endl;
    for(int i=0;i<5;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}