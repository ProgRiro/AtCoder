#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int GetDigit(int num) { return log10(num) + 1; }

int main() {
  long int N, K, i, n, count, Ntmp;
  bool flag = false;
  cin >> N >> K;
  vector<long int> D(K);
  vector<long int> num(10 - K);
  for (i = 0; i < K; i++) cin >> D[i];
  Ntmp = n = N;
  i = 2;
  while (1) {
    count = 0;
    while (n > 0) {
      // 入力されたDの中に、n%10がなかった場合count++する
      if (find(D.begin(), D.end(), n % 10) == D.end()) {
        count++;
        // countがDと同じ大きさになった時点で発見
        if (count == GetDigit(N)) {
          flag = true;
          break;
        }
      } else
        break;
      n /= 10;
    }
    // flagが立っていたらbreak
    if (flag) break;
    Ntmp = n = N * i++;
  }
  cout << Ntmp << endl;
}