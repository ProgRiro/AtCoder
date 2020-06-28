#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, K, i, a_cnt, b_cnt, ans = 0;

  // N, M, Kの入力
  cin >> N >> M >> K;

  // 1回も読まないことを考慮して先頭に0を入れたい
  vector<long int> A(N + 1, 0);
  vector<long int> B(M + 1, 0);

  // A, Bの入力
  for (i = 1; i <= N; i++) cin >> A.at(i);
  for (i = 1; i <= M; i++) cin >> B.at(i);

  // N, M冊目まで読んだ時に合計で何分かかるかが格納される
  for (i = 1; i <= N; i++) A.at(i) += A.at(i - 1);
  for (i = 1; i <= M; i++) B.at(i) += B.at(i - 1);

  b_cnt = M;

  for (a_cnt = 0; a_cnt <= N; a_cnt++) {
    if (A.at(a_cnt) > K) continue;

    while (A.at(a_cnt) + B.at(b_cnt) > K) b_cnt--;

    ans = max(ans, a_cnt + b_cnt);
  }

  cout << ans << endl;
}