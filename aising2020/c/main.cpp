#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
// #define PI acos(-1.0)
#define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int n, cnt = 0, res;
  int xx, yy, zz;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cnt = 0;
    for (int x = 1; x <= 100; x++) {
      xx = x * x;
      if (xx >= i) break;
      for (int y = 1; y <= 100; y++) {
        yy = y * y;
        if (xx + yy >= i) break;
        for (int z = 1; z <= 100; z++) {
          zz = z * z;
          if (xx + yy + zz >= i) break;
          res = xx + yy + zz + x * y + y * z + z * x;
          if (res > i) break;
          if (res == i) cnt++;
        }
      }
    }
    cout << cnt << endl;
  }
}