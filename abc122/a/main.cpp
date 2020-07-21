#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
// #define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  char b;
  cin >> b;
  switch (b) {
    case 'A':
      b = 'T';
      break;
    case 'T':
      b = 'A';
      break;
    case 'C':
      b = 'G';
      break;
    case 'G':
      b = 'C';
      break;
  }

  cout << b << endl;
}