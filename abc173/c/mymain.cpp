#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int H, W, K, cnt = 0, result = 0;
  cin >> H >> W >> K;
  vector<vector<char>> c(H, vector<char>(W));
  vector<vector<char>> ctmp(H, vector<char>(W));
  for (int i = 0; i < H; ++i)
    for (int j = 0; j < W; ++j) {
      cin >> c[i][j];
      if (c[i][j] == '#') cnt++;
    }
  if (cnt == K) result++;

  int i = 0, j = 0;
  for (int k = 0; k < H * W; ++k) {
    cnt = 0;
    for (int i = 0; i < H; ++i)
      for (int j = 0; j < W; ++j) ctmp[i][j] = c[i][j];
    for (int l = 0; l < W; l++) {
      ctmp[i][l] = '-';
    }
    for (int l = 0; l < H; l++) {
      ctmp[l][j] = '-';
    }
    for (int i = 0; i < H; ++i)
      for (int j = 0; j < W; ++j)
        if (ctmp[i][j] == '#') cnt++;
    if (cnt == K) {
      result++;
      cout << "i: " << i << ", j: " << j << endl;
    }
    if (j + 1 == W) {
      i++;
      j = 0;
    } else
      j++;
  }

  // for (int k = 0; k < H * W; ++k) {
  //   for (int i = 0; i < H; ++i)
  //     for (int j = 0; j < W; ++j) ctmp[i][j] = c[i][j];
  //   for (int i = 0; i < H; ++i) {
  //     for (int j = 0; j < W; ++j) {
  //       ctmp[i][j] = '-';
  //     }
  //     for (int j = 0; j < H; ++j) {
  //       ctmp[j][j] = '-';
  //     }
  //   }
  //   for (int j = 0; i < H; ++i) ctmp[i][j]
  // }

  // for (int i = 0; i < H; ++i) {
  //   for (int j = 0; j < W; ++j) {
  //     cin >> ctmp[i][j];
  //     cout << ctmp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  cout << result << endl;
}