#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
// #define PI acos(-1.0)
#define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  string s;
  cin >> s;
  int len = s.length();
  int cnt = 0;
  for (int i = 0; i < len / 2; ++i)
    if (s[i] != s[len - i - 1]) cnt++;
  cout << cnt << endl;
}