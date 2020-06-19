#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  for (int i = 0; i < 5; i++) {
    cin >> n;
    if (n == 0) {
      cout << i + 1 << endl;
      break;
    }
  }
}