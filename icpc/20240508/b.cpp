#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  while (1) {
    ll n, m;
    cin >> n >> m;
    if (n == 0 && m == 0) break;
    if (n == 0) {
      cout << -m * m << endl;
      continue;
    }
    if (m == 0) {
      cout << n * n << endl;
      continue;
    }
    ll ans = -1e18;
    for (ll i = n; i >= 1; i--) {
      ll p = i * i + n - i;
      ll q = (m / (n - i + 2)) * (m / (n - i + 2)) * ((n - i + 2) - m % (n - i + 2)) + (m / (n - i + 2) + 1) * (m / (n - i + 2) + 1) * (m % (n - i + 2));
      ans = max(ans, p - q);
    }
    cout << ans << endl;
  }
  return 0;
}