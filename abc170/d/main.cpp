#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, i, j, elm, m;
  int range = pow(10, 6);
  cin >> n;

  vector<int> A(n);
  for (i = 0; i < n; i++) {
    cin >> A.at(i);
  }

  vector<int> cnt(range + 1, 0);

  for (i = 0; i < A.size(); i++) {
    cnt[A[i]] += 1;
  }

  vector<int> uni;

  for (i = 0; i < range + 1; i++) {
    if (cnt[i] == 1) {
      uni.push_back(i);
    }
  }

  cnt = vector<int>(range + 1, 0);
  sort(A.begin(), A.end());
  A.erase(unique(A.begin(), A.end()), A.end());

  for (i = 0; i < A.size(); i++) {
    for (m = A[i] * 2; m < range + 1; m += A[i]) {
      cnt[m] = 1;
    }
  }

  int ans = 0;

  for (i = 0; i < uni.size(); i++) {
    if (cnt[uni[i]] == 0) {
      ans += 1;
    }
  }

  cout << ans << endl;
}