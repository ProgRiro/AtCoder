#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  cout << max(max(A, B), C) - min(min(A, B), C) << endl;
  return 0;
}