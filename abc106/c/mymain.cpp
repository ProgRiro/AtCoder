#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
// #define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  const ll day = 5000000000000000;
  string s;
  ll k;
  cin >> s >> k;

  vector<ll> line(s.length() + 1, 0);
  for (ll i = 0; i < s.length(); ++i) {
    if (s[i] == '1') {
      line[i + 1] = line[i] + 1;
      continue;
    }
    line[i + 1] = line[i] + pow(s[i], day);
  }

  for (ll i = 1; i < line.size(); ++i) {
    if (line[i] >= k) {
      cout << s[i - 1] << endl;
      break;
    }
  }

  return 0;
}