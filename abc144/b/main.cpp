#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
// #define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int n;
  cin >> n;
  for (int i = 1; i < 10; i++)
    for (int j = 1; j < 10; j++)
      if (i * j == n) {
        cout << "Yes" << endl;
        return 0;
      }

  cout << "No" << endl;
}