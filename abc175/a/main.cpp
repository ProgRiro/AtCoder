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
  string s;
  int cnt = 0;
  cin >> s;
  if (s[0] == 'R') {
    cnt++;
    if (s[1] == 'R') {
      cnt++;
      if (s[2] == 'R') cnt++;
    } else if (s[2] == 'R')
      cnt = 1;
  } else {
    if (s[1] == 'R') {
      cnt++;
      if (s[2] == 'R') cnt++;
    } else if (s[2] == 'R')
      cnt = 1;
  }
  cout << cnt << endl;
}
