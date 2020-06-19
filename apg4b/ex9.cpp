#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b, result;
  cin >> x >> a >> b;

  // 1.の出力
  result = ++x;
  cout << result << endl;

  // ここにプログラムを追記
  result *= (a + b);
  cout << result << endl;

  result *= result;
  cout << result << endl;

  cout << --result << endl;
}
