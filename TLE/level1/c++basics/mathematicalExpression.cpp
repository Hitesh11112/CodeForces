#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, c, e;
  char b, d;
  cin >> a >> b >> c >> d >> e;

  if (b == '+') {
    if (a + c == e)
      cout << "Yes\n";
    else
      cout << a + c << "\n";
  } else if (b == '-') {
    if (a - c == e)
      cout << "Yes\n";
    else
      cout << a - c << "\n";
  } else {
    if (a * c == e)
      cout << "Yes\n";
    else
      cout << a * c << "\n";
  }
}