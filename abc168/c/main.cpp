#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
// #define PI acos(-1.0)
#define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int a, b, h, m;
  cin >> a >> b >> h >> m;

  long double rad = PI * 2 *
                    ((long double)h / 12.0 + ((long double)m / 60.0) / 12.0 -
                     (long double)m / 60.0);

  long double rsq =
      (long double)(a * a + b * b) - (long double)(2 * a * b) * cosl(rad);

  printf("%20.20Lf\n", sqrtl(rsq));
}