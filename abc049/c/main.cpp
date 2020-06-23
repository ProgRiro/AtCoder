#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> T = {"esare", "resare", "maerd", "remaerd"};
  string S;
  cin >> S;
  bool flag = false;
  int tmp;
  for (int i = (int)S.size() - 1; i > 1; i--) {
    tmp = i;
    if (S[i] == 'e') {
      for (int j = 0; j < 5; j++) {
        if (S[tmp - j] == T[0][j]) {
          i--;
        } else {
          flag = true;
          break;
        }
      }
    } else if (S[i] == 'r' && S[i - 1] == 'e' && S[i - 2] == 's') {
      for (int j = 0; j < 6; j++) {
        if (S[tmp - j] == T[1][j]) {
          i--;
        } else {
          flag = true;
          break;
        }
      }
    } else if (S[i] == 'm') {
      for (int j = 0; j < 5; j++) {
        if (S[tmp - j] == T[2][j]) {
          i--;
        } else {
          flag = true;
          break;
        }
      }
    } else if (S[i] == 'r' && S[i - 1] == 'e' && S[i - 2] == 'm') {
      for (int j = 0; j < 7; j++) {
        if (S[tmp - j] == T[3][j]) {
          i--;
        } else {
          flag = true;
          break;
        }
      }
    } else {
      flag = true;
    }
    if (flag) break;
    i++;
  }
  cout << (flag ? "NO" : "YES") << endl;
  return 0;
}