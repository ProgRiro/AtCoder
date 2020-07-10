#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
#define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;

  cout << (a1 + a2 + a3 >= 22 ? "bust" : "win") << endl;
}