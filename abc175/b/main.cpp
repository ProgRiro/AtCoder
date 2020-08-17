#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define ll long long int
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
static const ll MAX = 1000000000000000;
static const int NIL = -1;
using namespace std;
const long double EPS = 0.0000000001;
const long double PI = (acos(-1));
const int MOD = 1000000007;

int main() {
  ll n, i, j, k, cnt = 0;
  cin >> n;
  vector<ll> L(n);
  for (i = 0; i < n; i++) cin >> L[i];
  sort(L.begin(), L.end());  // vector
  for (i = 0; i < n - 2; i++) {
    for (j = i + 1; j < n - 1; j++) {
      if (L[i] == L[j]) continue;
      for (k = j + 1; k < n; k++) {
        if (L[j] == L[k]) continue;
        if (llabs(L[i] - L[j]) < L[k] && llabs(L[i] + L[j]) > L[k]) cnt++;
      }
    }
  }
  cout << cnt << endl;
}
