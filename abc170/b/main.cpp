#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, b;

  cin >> x >> y;

  for (int a = 0; a < x + 1; a++) {
    b = x - a;
    if (y == 2 * a + 4 * b) {
      cout << "Yes" << endl;
      exit(0);
    }
  }
  cout << "No" << endl;
}
