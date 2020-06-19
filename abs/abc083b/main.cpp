#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  int tmp, tsum, sum = 0;
  cin >> n >> a >> b;
  for (int i = 1; i <= n; i++) {
    tsum = 0;
    tmp = i;
    while (tmp > 0) {
      tsum += tmp % 10;
      tmp /= 10;
    }
    if (a <= tsum && b >= tsum) {
      sum += i;
    }
  }
  cout << sum << endl;
  return 0;
}