#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
// #define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int n, cnt = 0;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n - 2; i++)
    if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') cnt++;
  cout << cnt << endl;
}