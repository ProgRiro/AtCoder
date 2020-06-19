#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, x;
  int at, bt, ct, count = 0;
  cin >> a >> b >> c >> x;
  for (int i = 0; i <= a; i++) {
    at = 500 * i;
    for (int j = 0; j <= b; j++) {
      bt = 100 * j;
      for (int k = 0; k <= c; k++) {
        ct = 50 * k;
        if (at + bt + ct == x) count++;
      }
    }
  }
  cout << count << endl;
  return 0;
}