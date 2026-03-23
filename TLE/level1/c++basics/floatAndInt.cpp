#include <bits/stdc++.h>
using namespace std;

int main() {
  long double n;
  cin >> n;

  if(ceil(n) == floor(n)) cout << "int " << floor(n) << '\n';
  else cout << "float "<< floor(n) << ' ' << n - floor(n) << '\n';
}