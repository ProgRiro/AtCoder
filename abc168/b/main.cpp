#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int K;
  string S;
  cin >> K >> S;
  if (S.size() <= K)
    cout << S << endl;
  else {
    for (int i = 0; i < K; ++i) cout << S[i];
    cout << "..." << endl;
  }
}