#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  string S;
  int sum = 1;

  getline(cin, S);

  for (int i = 0; i < S.length(); i++) {
    if (S[i] == '+') {
      sum++;
    } else if (S[i] == '-') {
      sum--;
    }
  }

  cout << sum << endl;
}