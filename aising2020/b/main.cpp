#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
// #define PI acos(-1.0)
#define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int n, cnt = 0;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
    if ((i + 1) % 2 == 1 && a.at(i) % 2 == 1) cnt++;
  }
  cout << cnt << endl;
}