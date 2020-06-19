#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // breakがなければこのループは i == 4 まで繰り返す
  rep(i, 5) {
    // if (i == 3)
    // {
    //   cout << "ぬける" << endl;
    //   break; // i == 3 の時点でループから抜ける
    // }
    if (i == 3) {
      cout << "とばす" << endl;
      continue;  // i == 3 のとき これより後の処理をとばす
    }

    cout << i << endl;
  }

  cout << "終了" << endl;
}
