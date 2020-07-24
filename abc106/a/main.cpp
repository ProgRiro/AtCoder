#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
// #define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int x, y, yard;
  cin >> x >> y;

  yard = (x * y) - (x + y) + 1;

  cout << yard << endl;
}