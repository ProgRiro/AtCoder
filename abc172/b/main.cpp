#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  int count = 0;
  cin >> S >> T;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] != T[i]) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}