#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
// #define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int n, cnt, result = 0;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cnt = 0;
    for (int j = 1; j <= i; j += 2)
      if (i % j == 0) cnt++;
    if (cnt == 8) result++;
  }

  cout << result << endl;
}