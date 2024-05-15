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

void selectionSort(vi &a, int n){
    for(int i=0;i<n;i++){
        int minj = i;
        for(int j=i;j<n;j++){
            if(a[j] < a[minj]){
                minj = j;
            }
        }
        swap(a[i], a[minj]);
        rep(i, n){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    vector<int> a = {5, 3, 2, 4, 1};
    selectionSort(a, 5);
    cout << "Result:" << endl;
    for(int i=0;i<5;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;   
}