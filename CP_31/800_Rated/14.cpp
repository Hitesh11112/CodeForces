#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test;
  cin >> test;

  while (test--) {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > (b + c)) {
      cout << "First" << '\n';
    } else if (b > (a + c)) {
      cout << "Second" << '\n';
    } else if (a == b) {
      if (c % 2 == 0) {
        cout << "Second" << '\n';
      } else {
        cout << "First" << '\n';
      }
    } else {
      if ((a + c) == b) {
        cout << "Second" << '\n';
      } else if ((b + c) == a) {
        cout << "First" << '\n';
      } else if ((b + c) > a) {
        if (a > b) {
          cout << "First" << '\n';
        } else {
          cout << "Second" << '\n';
        }
      } else if ((a + c) > b) {
        if (a > b) {
          cout << "First" << '\n';
        } else {
          cout << "Second" << '\n';
        }
      }
    }
  }

  return 0;
}
