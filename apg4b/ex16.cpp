#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  bool flag = false;
  for (int i = 1; i < data.size(); i++) {
    if (data.at(i - 1) == data.at(i)) {
      flag = true;
      break;
    }
  }
  cout << ((flag) ? "YES" : "NO") << endl;
}
