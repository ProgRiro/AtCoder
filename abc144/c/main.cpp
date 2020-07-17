#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
// #define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  ll n, a, b, cnt, num;
  cnt = LONG_LONG_MAX;
  cin >> n;
  for (a = 1; a <= sqrt(n); a++)
    if (n % a == 0) {
      b = n / a;
      if (a * b == n && cnt > (a + b - 2)) cnt = a + b - 2;
    }

  cout << cnt << endl;
}