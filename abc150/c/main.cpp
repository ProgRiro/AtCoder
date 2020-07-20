#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
// #define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int N;
vector<int> p, q;

int main() {
  cin >> N;
  vector<int> p(N), q(N);

  // ex) input: 132 ---> output: 021
  for (int i = 0; i < N; ++i) cin >> p[i], --p[i];
  for (int i = 0; i < N; ++i) cin >> q[i], --q[i];

  // 各順列が何番目かを求める
  map<vector<int>, int> ord;
  int iter = 0;

  // スタートとなる順列
  // ex) N=4 ---> [0, 1, 2, 3]
  vector<int> v(N);
  for (int i = 0; i < N; ++i) v[i] = i;

  // 順番に全てを数え上げる
  do {
    // 連想配列のキーに配列、バリューに辞書順で数えたときの番号
    // ex) ord[[0, 1, 2, 3]: 0]
    ord[v] = iter++;

    // next_permutation は、辞書順の最後まで到達したら false を返す
  } while (next_permutation(v.begin(), v.end()));

  // ord[[1, 3, 2]] - ord[[3, 1, 2]] のような感じ
  cout << abs(ord[p] - ord[q]) << endl;
}