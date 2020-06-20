#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, dan = 1;
  cin >> N;

  vector<int> d(N);
  for (int i = 0; i < N; i++) {
    cin >> d.at(i);
  }

  sort(d.begin(), d.end(), greater<>());

  for (int i = 1; i < N; i++) {
    if (d.at(i) < d.at(i - 1)) {
      dan++;
    }
  }
  cout << dan << endl;
}