#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m, a;
  cin >> n >> m >> a;
  long long aa = (n + a - 1) / a;
  long long bb = (m + a - 1) / a;
  cout << aa * bb << '\n';
}