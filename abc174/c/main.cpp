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
  int k, mod = 7, cnt = 1;
  cin >> k;
  rep(i, k) {
    if (mod % k == 0) break;
    cnt++;
    mod = (mod * 10 + 7) % k;
  }
  if (mod % k == 0)
    cout << cnt << endl;
  else
    cout << -1 << endl;
}
