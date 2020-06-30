#include <bits/stdc++.h>
using namespace std;

int main() {
  int D;
  vector<int> c(26);
  // int型の2次元配列(D×26要素の)の宣言
  vector<vector<int>> s(D, vector<int>(26));
  vector<int> t(26);
  cin >> D;
  for (int i = 0; i < 26 : i++) cin >> c[i];
  for (int i = 0; i < D : i++)
    for (int j = 0; j < 26; j++) cin >> s[i][j];
  for (int i = 0; i < 26 : i++) cin >> t[i];
  for (int i = 0; i < D : i++)
    for (int j = 0; j < 26; j++) cout << s[i][j];
}