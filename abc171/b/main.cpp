#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  int sum = 0;
  cin >> N >> K;
  vector<int> price(N);
  for (int i = 0; i < N; i++) {
    cin >> price.at(i);
  }
  sort(price.begin(), price.end());
  for (int i = 0; i < K; i++) {
    sum += price.front();
    price.erase(price.begin());
  }
  cout << sum << endl;

  return 0;
}