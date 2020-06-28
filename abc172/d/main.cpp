#include <bits/stdc++.h>
using namespace std;

int fn(int x) {
  int count = 0;
  for (int i = 1; i <= x; i++) {
    if (x % i == 0) {
      count++;
    }
  }
  return count;
}

int main() {
  int N;
  unsigned long sum = 0;
  cin >> N;
  for (int k = 1; k <= N; k++) {
    sum += k * fn(k);
  }
  cout << sum << endl;
  return 0;
}