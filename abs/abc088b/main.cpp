#include <bits/stdc++.h>
using namespace std;

int mymax(vector<int> a) {
  int maxarg = 0;
  for (int i = 1; i < a.size(); i++) {
    if (a.at(i) > a.at(maxarg)) {
      maxarg = i;
    }
  }
  return maxarg;
}

int main() {
  int n, maxarg, alice = 0, bob = 0;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  for (int i = 0; i < n; i++) {
    maxarg = mymax(a);
    if (i % 2 == 0) {
      alice += a.at(maxarg);
    } else {
      bob += a.at(maxarg);
    }
    a.erase(a.begin() + maxarg);
  }
  cout << alice - bob << endl;
  return 0;
}