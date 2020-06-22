#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  long int n;
  cin >> n;
  long int a = 26;
  long int m;

  list<char> s;
  for (int i = 0; i < 12; i++) {
    n -= 1;
    m = n % a;
    s.push_front((char)('a' + m));
    n /= a;
    if (n <= 0) break;
  }

  for (auto i : s) {
    cout << i;
  }
  cout << endl;

  return 0;
}