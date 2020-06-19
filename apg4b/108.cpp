#include <bits/stdc++.h>
using namespace std;

int main() {
  int x = 5;
  cout << x << endl;  // 5

  if (x == 5) {
    cout << x << endl;  // 5

    string x = "hello";  // int x = 5;のスコープと重なっている
    cout << x << endl;   // hello
  }

  cout << x << endl;  // 5
}

/*
スコープが重なっている場合
変数を使える条件は次の2つです。

変数を使っている場所より前で宣言されている
変数を使っている場所と同じか、より外側のブロックで宣言されている
同じ名前の変数のスコープが重なっていて、候補が複数考えられる場合は次の条件で使う変数が決められます。

候補の変数のうち最も内側で宣言されている
*/