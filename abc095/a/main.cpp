#include <bits/stdc++.h>
using namespace std;

int main() {
  int cnt = 0;
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
    if (s[i] == 'o') cnt++;
  cout << 700 + (100 * cnt) << endl;
}