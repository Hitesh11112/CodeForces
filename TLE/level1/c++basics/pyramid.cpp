#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  for (long long curr = 0; curr < n; ++curr) {
    for (long long i = 0; i <= curr; ++i) {
      cout << '*';
    }
    cout << '\n';
  }
}