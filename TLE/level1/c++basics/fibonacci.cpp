#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  unsigned long long a = 0, b = 1;
  if (n <= 1) {
    cout << a << '\n';
    return 0;
  }

  while (n > 1) {
    b = a + b;
    a = b - a;
    n--;
  }
  cout << a << endl;
}