#include <bits/stdc++.h>
using namespace std;

int main() {
  string str1, str2;
  cin >> str1;
  str2 = ", world!";

  cout << str1 << str2 << endl;
  cout << str1.size() << endl;

  // 得られるのは char型
  cout << str1.at(1) << endl;

  char c = 'a';
  cout << c << endl;

  cout << "Hello"s.size() << endl;  // 5（sを末尾につける）
  // cout << "Hello".size() << endl;   // できない
  string hello = "Hello";
  // +演算子による連結
  cout << hello + ", world!" << endl;  // Hello, world!
  // +=演算子による連結
  hello += ", AtCoder!";
  cout << hello << endl;  // Hello, AtCoder!

  // char型の変数にcinで入力すると一文字ずつ取り出すことができる
  char a, b;
  cin >> a >> b;
  cout << a << endl;
  cout << b << endl;

  // cinを使うと空白や改行区切りの入力を簡単に扱えますが、空白で区切らずに行単位で入力を受け取りたいこともあります。
  // その場合はgetlineを使います。
  string s, t;
  getline(cin, s);  // 変数sで入力を一行受け取る
  getline(cin, t);  // 変数tで入力を一行受け取る
  cout << "一行目 " << s << endl;
  cout << "二行目 " << t << endl;
}

/*
キーポイント
文字列を扱うにはstring型を使う
文字を扱うにはchar型を使う
文字列変数.size()で文字列の長さを取得できる
文字列変数.at(i)でi文字目にアクセスできる
文字列変数.at(i)のiを添え字という
添字は0から始まる
添字の値が正しい範囲内に無いと実行時エラーになる
string型とchar型の比較はできない
string型とchar型の連結はできる
*/