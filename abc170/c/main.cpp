// #include <bits/stdc++.h>
// using namespace std;

// int check(const vector<int> &list, int v) {
//   auto ite = find(list.begin(), list.end(), v);
//   if (ite != list.end()) {
//     // std::distanceで配列の位置を取得できます。
//     // std::cout << "exist at " << std::distance(list.begin(), ite) <<
//     // std::endl;
//     return distance(list.begin(), ite);
//   } else {
//     // std::cout << "not found." << std::endl;
//     return -1;
//   }
// }

// int main() {
//   int x, n, res;
//   int min = INT_MAX;

//   cin >> x >> n;

//   vector<int> p(n);
//   vector<int> q(100 - n);

//   for (int i = 0; i < n; i++) {
//     cin >> p.at(i);
//   }

//   int j = 0;
//   for (int i = 1; i <= 100; i++) {
//     if (check(p, i) != -1) continue;
//     q.at(j++) = i;
//     if (j == 100 - n) break;
//   }

//   // for (int i = 0; i < 100 - n; i++) {
//   //   cout << q.at(i) << " ";
//   // }

//   // cout << abs(5 - 10) << endl;

//   for (int i = 100 - n - 1; i >= 0; i--) {
//     if (min >= abs(q.at(i) - x)) {
//       min = abs(q.at(i) - x);
//       // cout << q.at(i) << " - " << x << endl;
//       // if (res > q.at(i)) {
//       res = q.at(i);
//       // }
//       // cout << res << " ";
//     }
//   }

//   cout << res << endl;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, n;
  cin >> x >> n;

  vector<int> Ps(n);
  for (int i = 0; i < n; i++) {
    cin >> Ps.at(i);
  }

  vector<int> line(102, 0);
  for (int p : Ps) {
    line.at(p) = 1;
  }

  int L, R;
  for (int i = 0; i < 102; i++) {
    L = x - i;
    R = x + i;
    if (line.at(L) == 0) {
      cout << L << endl;
      break;
    }
    if (line.at(R) == 0) {
      cout << R << endl;
      break;
    }
  }
}