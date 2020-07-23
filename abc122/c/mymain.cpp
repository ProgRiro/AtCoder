#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
// #define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int n, q, cnt, i;

  /* 入力部分 */
  cin >> n >> q;
  string s;
  cin >> s;

  vector<int> l(q, 0), r(q, 0);
  for (i = 0; i < q; ++i) {
    cin >> l[i] >> r[i];
    l[i]--;
    r[i]--;
  }

  /* 'A'の位置を求める */
  vector<int> line;
  cnt = 0;
  for (i = 0; i < n; ++i)
    if (s[i] == 'A') line.push_back(i);
  /* 文字列'AC'が含まれているか検証 */
  for (int _ = 0; _ < q; ++_) {
    cnt = 0;
    for (i = 0; i < line.size(); ++i) {
      if (line[i] < l[_]) continue;
      if (line[i] > r[_] - 1) continue;
      if (s[line[i] + 1] == 'C') cnt++;
    }
    cout << cnt << endl;
  }
}