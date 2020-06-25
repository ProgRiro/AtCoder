#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  // int N;
  // bool flag = false;
  // int mx, my, vsum;
  // mx = my = vsum = 0;
  // cin >> N;
  // vector<int> t(N + 1, 0), x(N), y(N);
  // for (int i = 0; i < N; i++) {
  //   cin >> t[i + 1] >> x[i] >> y[i];
  // }
  // for (int i = 0; i < N; i++) {
  //   // x方向
  //   for (int j = 0; j < t[i + 1] - t[i]; j++) {
  //     if (mx == x[i]) {
  //       break;
  //     } else if (mx > x[i]) {
  //       mx--;
  //     } else {
  //       mx++;
  //     }
  //     vsum++;
  //   }
  //   // y方向
  //   for (int j = 0; j < t[i + 1] - t[i] - j; j++) {
  //     if (my == y[i]) {
  //       break;
  //     } else if (my > y[i]) {
  //       my--;
  //     } else {
  //       my++;
  //     }
  //     vsum++;
  //   }
  //   if (x[i] != mx || y[i] != my) {
  //     flag = true;
  //     break;
  //   } else if ((t[i + 1] - vsum) % 2 == 1) {
  //     flag = true;
  //     break;
  //   }
  // }
  // cout << (flag ? "No" : "Yes") << endl;

  int N, t, x, y, t_before, x_before, y_before;
  bool flag = true;
  cin >> N;
  t_before = x_before = y_before = 0;
  for (int i = 0; i < N; i++) {
    cin >> t >> x >> y;

    // 移動秒数よりも移動距離が長かった場合
    if ((t - t_before) < (abs(x - x_before) + abs(y - y_before))) {
      flag = false;
      break;
    }

    // 移動秒数 - (xの移動距離 + yの移動距離) が奇数だった場合
    if (((t - t_before) - (abs(x - x_before) + abs(y - y_before))) % 2 == 1) {
      flag = false;
      break;
    }

    // 値の更新
    t_before = t;
    x_before = x;
    y_before = y;
  }

  // 出力
  cout << (flag ? "Yes" : "No") << endl;
  return 0;
}