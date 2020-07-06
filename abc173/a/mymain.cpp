#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int N, yen = 0;
  cin >> N;
  while (yen < N) yen += 1000;
  cout << yen - N << endl;
}